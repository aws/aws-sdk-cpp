/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <aws/common/xml_parser.h>

#include <utility>
#include <algorithm>
#include <cassert>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String Aws::Utils::Xml::DecodeEscapedXmlText(const Aws::String& textToDecode)
{
    Aws::String decodedString = textToDecode;
    StringUtils::Replace(decodedString, "&quot;", "\"");
    StringUtils::Replace(decodedString, "&apos;", "'");
    StringUtils::Replace(decodedString, "&lt;", "<");
    StringUtils::Replace(decodedString, "&gt;", ">");
    StringUtils::Replace(decodedString, "&amp;", "&");
    StringUtils::Replace(decodedString, "&#xA;", "\n");
    StringUtils::Replace(decodedString, "&#xD;", "\r");
    return decodedString;
}

// Internal DOM node structure built from SAX events
struct XmlNode::NodeData
{
    Aws::String name;
    Aws::String text;
    Aws::Map<Aws::String, Aws::String> attributes;
    Aws::Vector<std::shared_ptr<NodeData>> children;
    std::weak_ptr<NodeData> parent;
    std::shared_ptr<NodeData> nextSibling;
};

struct XmlDocument::DocData
{
    std::shared_ptr<XmlNode::NodeData> root;
    bool parseSuccessful = true;
    Aws::String errorMessage;
};

// SAX parser context for building DOM tree
struct ParseContext
{
    std::shared_ptr<XmlNode::NodeData> currentNode;
    std::shared_ptr<XmlDocument::DocData> docData;
};

static int on_node_encountered(struct aws_xml_node* node, void* user_data);

static void parse_children(struct aws_xml_node* saxNode, std::shared_ptr<XmlNode::NodeData> domNode)
{
    // Try to get body text
    struct aws_byte_cursor body;
    if (aws_xml_node_as_body(saxNode, &body) == AWS_OP_SUCCESS && body.len > 0)
    {
        domNode->text = Aws::String(reinterpret_cast<const char*>(body.ptr), body.len);
    }
    else
    {
        // Has children — traverse them
        struct ChildContext {
            std::shared_ptr<XmlNode::NodeData> parent;
        };
        ChildContext ctx{domNode};

        aws_xml_node_traverse(saxNode, [](struct aws_xml_node* childSaxNode, void* ud) -> int {
            auto* childCtx = static_cast<ChildContext*>(ud);

            auto childDom = std::make_shared<XmlNode::NodeData>();
            struct aws_byte_cursor nameCursor = aws_xml_node_get_name(childSaxNode);
            childDom->name = Aws::String(reinterpret_cast<const char*>(nameCursor.ptr), nameCursor.len);
            childDom->parent = childCtx->parent;

            // Get attributes
            size_t numAttrs = aws_xml_node_get_num_attributes(childSaxNode);
            for (size_t i = 0; i < numAttrs; ++i)
            {
                struct aws_xml_attribute attr = aws_xml_node_get_attribute(childSaxNode, i);
                Aws::String attrName(reinterpret_cast<const char*>(attr.name.ptr), attr.name.len);
                Aws::String attrValue(reinterpret_cast<const char*>(attr.value.ptr), attr.value.len);
                childDom->attributes[attrName] = attrValue;
            }

            // Link siblings
            if (!childCtx->parent->children.empty())
            {
                childCtx->parent->children.back()->nextSibling = childDom;
            }
            childCtx->parent->children.push_back(childDom);

            // Recurse into this child
            parse_children(childSaxNode, childDom);

            return AWS_OP_SUCCESS;
        }, &ctx);
    }
}

static int on_node_encountered(struct aws_xml_node* node, void* user_data)
{
    auto* ctx = static_cast<ParseContext*>(user_data);

    auto rootNode = std::make_shared<XmlNode::NodeData>();
    struct aws_byte_cursor nameCursor = aws_xml_node_get_name(node);
    rootNode->name = Aws::String(reinterpret_cast<const char*>(nameCursor.ptr), nameCursor.len);

    // Get attributes
    size_t numAttrs = aws_xml_node_get_num_attributes(node);
    for (size_t i = 0; i < numAttrs; ++i)
    {
        struct aws_xml_attribute attr = aws_xml_node_get_attribute(node, i);
        Aws::String attrName(reinterpret_cast<const char*>(attr.name.ptr), attr.name.len);
        Aws::String attrValue(reinterpret_cast<const char*>(attr.value.ptr), attr.value.len);
        rootNode->attributes[attrName] = attrValue;
    }

    ctx->docData->root = rootNode;
    parse_children(node, rootNode);

    return AWS_OP_SUCCESS;
}

// -- XmlNode implementation --

XmlNode::XmlNode(const XmlNode& other) : m_nodeData(other.m_nodeData), m_doc(other.m_doc)
{
}

XmlNode& XmlNode::operator=(const XmlNode& other)
{
    if (this == &other) return *this;
    m_nodeData = other.m_nodeData;
    m_doc = other.m_doc;
    return *this;
}

const Aws::String XmlNode::GetName() const
{
    return m_nodeData ? m_nodeData->name : "";
}

void XmlNode::SetName(const Aws::String& name)
{
    if (m_nodeData) m_nodeData->name = name;
}

const Aws::String XmlNode::GetAttributeValue(const Aws::String& name) const
{
    if (!m_nodeData) return "";
    auto it = m_nodeData->attributes.find(name);
    return it != m_nodeData->attributes.end() ? it->second : "";
}

void XmlNode::SetAttributeValue(const Aws::String& name, const Aws::String& value)
{
    if (m_nodeData) m_nodeData->attributes[name] = value;
}

Aws::String XmlNode::GetText() const
{
    if (!m_nodeData) return {};

    // If this node has direct text, return it
    if (!m_nodeData->text.empty()) return m_nodeData->text;

    // Otherwise serialize children as XML text (matching tinyxml2 behavior)
    Aws::StringStream ss;
    for (const auto& child : m_nodeData->children)
    {
        // Simple serialization of child nodes
        ss << "<" << child->name;
        for (const auto& attr : child->attributes)
        {
            ss << " " << attr.first << "=\"" << attr.second << "\"";
        }
        if (child->children.empty() && child->text.empty())
        {
            ss << "/>";
        }
        else
        {
            ss << ">";
            if (!child->text.empty()) ss << child->text;
            // Recursively serialize grandchildren would be needed for full fidelity
            ss << "</" << child->name << ">";
        }
    }
    return ss.str();
}

void XmlNode::SetText(const Aws::String& textValue)
{
    if (m_nodeData) m_nodeData->text = textValue;
}

bool XmlNode::HasNextNode() const
{
    return m_nodeData && m_nodeData->nextSibling != nullptr;
}

XmlNode XmlNode::NextNode() const
{
    if (m_nodeData && m_nodeData->nextSibling)
    {
        return XmlNode(m_nodeData->nextSibling, *m_doc);
    }
    return XmlNode(nullptr, *m_doc);
}

XmlNode XmlNode::NextNode(const char* name) const
{
    if (!m_nodeData) return XmlNode(nullptr, *m_doc);

    auto sibling = m_nodeData->nextSibling;
    while (sibling)
    {
        if (sibling->name == name) return XmlNode(sibling, *m_doc);
        sibling = sibling->nextSibling;
    }
    return XmlNode(nullptr, *m_doc);
}

XmlNode XmlNode::NextNode(const Aws::String& name) const
{
    return NextNode(name.c_str());
}

XmlNode XmlNode::FirstChild() const
{
    if (m_nodeData && !m_nodeData->children.empty())
    {
        return XmlNode(m_nodeData->children[0], *m_doc);
    }
    return XmlNode(nullptr, *m_doc);
}

XmlNode XmlNode::FirstChild(const char* name) const
{
    if (!m_nodeData) return XmlNode(nullptr, *m_doc);

    for (const auto& child : m_nodeData->children)
    {
        if (child->name == name) return XmlNode(child, *m_doc);
    }
    return XmlNode(nullptr, *m_doc);
}

XmlNode XmlNode::FirstChild(const Aws::String& name) const
{
    return FirstChild(name.c_str());
}

bool XmlNode::HasChildren() const
{
    return m_nodeData && !m_nodeData->children.empty();
}

XmlNode XmlNode::Parent() const
{
    if (m_nodeData)
    {
        auto p = m_nodeData->parent.lock();
        if (p) return XmlNode(p, *m_doc);
    }
    return XmlNode(nullptr, *m_doc);
}

XmlNode XmlNode::CreateChildElement(const Aws::String& name)
{
    if (!m_nodeData) return XmlNode(nullptr, *m_doc);

    auto child = std::make_shared<NodeData>();
    child->name = name;
    child->parent = m_nodeData;

    if (!m_nodeData->children.empty())
    {
        m_nodeData->children.back()->nextSibling = child;
    }
    m_nodeData->children.push_back(child);
    return XmlNode(child, *m_doc);
}

XmlNode XmlNode::CreateSiblingElement(const Aws::String& name)
{
    if (!m_nodeData) return XmlNode(nullptr, *m_doc);

    auto parent = m_nodeData->parent.lock();
    if (!parent) return XmlNode(nullptr, *m_doc);

    auto sibling = std::make_shared<NodeData>();
    sibling->name = name;
    sibling->parent = parent;

    if (!parent->children.empty())
    {
        parent->children.back()->nextSibling = sibling;
    }
    parent->children.push_back(sibling);
    return XmlNode(sibling, *m_doc);
}

bool XmlNode::IsNull()
{
    return m_nodeData == nullptr;
}

// -- XmlDocument implementation --

XmlDocument::XmlDocument() : m_data(nullptr)
{
}

XmlDocument::XmlDocument(const XmlDocument& doc) :
    m_data(doc.m_data)
{
}

XmlDocument::XmlDocument(XmlDocument&& doc) :
    m_data(std::move(doc.m_data))
{
}

XmlDocument& XmlDocument::operator=(const XmlDocument& other)
{
    if (this == &other) return *this;
    m_data = other.m_data;
    return *this;
}

XmlDocument& XmlDocument::operator=(XmlDocument&& other)
{
    if (this == &other) return *this;
    m_data = std::move(other.m_data);
    return *this;
}

XmlDocument::~XmlDocument()
{
}

XmlNode XmlDocument::GetRootElement() const
{
    if (m_data && m_data->root)
    {
        return XmlNode(m_data->root, *this);
    }
    return XmlNode(nullptr, *this);
}

Aws::String XmlDocument::ConvertToString() const
{
    if (!m_data || !m_data->root) return "";

    Aws::StringStream ss;
    ss << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";

    // Recursive serialization
    struct Serializer {
        static void serialize(Aws::StringStream& out, const std::shared_ptr<XmlNode::NodeData>& node)
        {
            out << "<" << node->name;
            for (const auto& attr : node->attributes)
            {
                out << " " << attr.first << "=\"" << attr.second << "\"";
            }

            if (node->children.empty() && node->text.empty())
            {
                out << "/>\n";
            }
            else
            {
                out << ">";
                if (!node->text.empty())
                {
                    out << node->text;
                }
                for (const auto& child : node->children)
                {
                    serialize(out, child);
                }
                out << "</" << node->name << ">\n";
            }
        }
    };

    Serializer::serialize(ss, m_data->root);
    return ss.str();
}

bool XmlDocument::WasParseSuccessful() const
{
    return m_data ? m_data->parseSuccessful : true;
}

Aws::String XmlDocument::GetErrorMessage() const
{
    return (m_data && !m_data->parseSuccessful) ? m_data->errorMessage : "";
}

XmlDocument XmlDocument::CreateFromXmlStream(Aws::IOStream& xmlStream)
{
    Aws::String xmlString((Aws::IStreamBufIterator(xmlStream)), Aws::IStreamBufIterator());
    return CreateFromXmlString(xmlString);
}

XmlDocument XmlDocument::CreateFromXmlString(const Aws::String& xmlText)
{
    XmlDocument xmlDocument;
    xmlDocument.m_data = std::make_shared<DocData>();

    struct aws_byte_cursor doc_cursor = aws_byte_cursor_from_array(xmlText.c_str(), xmlText.length());

    ParseContext ctx;
    ctx.docData = xmlDocument.m_data;

    struct aws_xml_parser_options options;
    options.doc = doc_cursor;
    options.max_depth = 0; // unlimited
    options.on_root_encountered = on_node_encountered;
    options.user_data = &ctx;

    int result = aws_xml_parse(aws_default_allocator(), &options);
    if (result != AWS_OP_SUCCESS)
    {
        xmlDocument.m_data->parseSuccessful = false;
        xmlDocument.m_data->errorMessage = "Failed to parse XML document.";
    }

    return xmlDocument;
}

XmlDocument XmlDocument::CreateWithRootNode(const Aws::String& rootNodeName)
{
    XmlDocument xmlDocument;
    xmlDocument.m_data = std::make_shared<DocData>();
    xmlDocument.m_data->root = std::make_shared<XmlNode::NodeData>();
    xmlDocument.m_data->root->name = rootNodeName;
    return xmlDocument;
}
