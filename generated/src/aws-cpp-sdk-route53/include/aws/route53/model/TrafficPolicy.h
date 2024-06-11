/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/RRType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains settings for a traffic policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/TrafficPolicy">AWS
   * API Reference</a></p>
   */
  class TrafficPolicy
  {
  public:
    AWS_ROUTE53_API TrafficPolicy();
    AWS_ROUTE53_API TrafficPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API TrafficPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID that Amazon Route 53 assigned to a traffic policy when you created
     * it.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline TrafficPolicy& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline TrafficPolicy& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline TrafficPolicy& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number that Amazon Route 53 assigns to a traffic policy. For a
     * new traffic policy, the value of <code>Version</code> is always 1.</p>
     */
    inline int GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline TrafficPolicy& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that you specified when you created the traffic policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TrafficPolicy& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TrafficPolicy& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TrafficPolicy& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS type of the resource record sets that Amazon Route 53 creates when
     * you use a traffic policy to create a traffic policy instance.</p>
     */
    inline const RRType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RRType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RRType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline TrafficPolicy& WithType(const RRType& value) { SetType(value); return *this;}
    inline TrafficPolicy& WithType(RRType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of a traffic policy in JSON format. You specify the JSON
     * document to use for a new traffic policy in the <code>CreateTrafficPolicy</code>
     * request. For more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/api-policies-traffic-policy-document-format.html">Traffic
     * Policy Document Format</a>.</p>
     */
    inline const Aws::String& GetDocument() const{ return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    inline void SetDocument(const Aws::String& value) { m_documentHasBeenSet = true; m_document = value; }
    inline void SetDocument(Aws::String&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }
    inline void SetDocument(const char* value) { m_documentHasBeenSet = true; m_document.assign(value); }
    inline TrafficPolicy& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}
    inline TrafficPolicy& WithDocument(Aws::String&& value) { SetDocument(std::move(value)); return *this;}
    inline TrafficPolicy& WithDocument(const char* value) { SetDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comment that you specify in the <code>CreateTrafficPolicy</code> request,
     * if any.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline TrafficPolicy& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline TrafficPolicy& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline TrafficPolicy& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    int m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RRType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_document;
    bool m_documentHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
