/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/sdb/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SimpleDB
{
namespace Model
{
  class DomainMetadataResult
  {
  public:
    AWS_SIMPLEDB_API DomainMetadataResult() = default;
    AWS_SIMPLEDB_API DomainMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SIMPLEDB_API DomainMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * The number of all items in the domain.
     */
    inline int GetItemCount() const { return m_itemCount; }
    inline void SetItemCount(int value) { m_itemCountHasBeenSet = true; m_itemCount = value; }
    inline DomainMetadataResult& WithItemCount(int value) { SetItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * The total size of all item names in the domain, in bytes.
     */
    inline long long GetItemNamesSizeBytes() const { return m_itemNamesSizeBytes; }
    inline void SetItemNamesSizeBytes(long long value) { m_itemNamesSizeBytesHasBeenSet = true; m_itemNamesSizeBytes = value; }
    inline DomainMetadataResult& WithItemNamesSizeBytes(long long value) { SetItemNamesSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of unique attribute names in the domain.
     */
    inline int GetAttributeNameCount() const { return m_attributeNameCount; }
    inline void SetAttributeNameCount(int value) { m_attributeNameCountHasBeenSet = true; m_attributeNameCount = value; }
    inline DomainMetadataResult& WithAttributeNameCount(int value) { SetAttributeNameCount(value); return *this;}
    ///@}

    ///@{
    /**
     * The total size of all unique attribute names in the domain, in bytes.
     */
    inline long long GetAttributeNamesSizeBytes() const { return m_attributeNamesSizeBytes; }
    inline void SetAttributeNamesSizeBytes(long long value) { m_attributeNamesSizeBytesHasBeenSet = true; m_attributeNamesSizeBytes = value; }
    inline DomainMetadataResult& WithAttributeNamesSizeBytes(long long value) { SetAttributeNamesSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of all attribute name/value pairs in the domain.
     */
    inline int GetAttributeValueCount() const { return m_attributeValueCount; }
    inline void SetAttributeValueCount(int value) { m_attributeValueCountHasBeenSet = true; m_attributeValueCount = value; }
    inline DomainMetadataResult& WithAttributeValueCount(int value) { SetAttributeValueCount(value); return *this;}
    ///@}

    ///@{
    /**
     * The total size of all attribute values in the domain, in bytes.
     */
    inline long long GetAttributeValuesSizeBytes() const { return m_attributeValuesSizeBytes; }
    inline void SetAttributeValuesSizeBytes(long long value) { m_attributeValuesSizeBytesHasBeenSet = true; m_attributeValuesSizeBytes = value; }
    inline DomainMetadataResult& WithAttributeValuesSizeBytes(long long value) { SetAttributeValuesSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * The data and time when metadata was calculated, in Epoch (UNIX) seconds.
     */
    inline int GetTimestamp() const { return m_timestamp; }
    inline void SetTimestamp(int value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline DomainMetadataResult& WithTimestamp(int value) { SetTimestamp(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DomainMetadataResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    int m_itemCount{0};
    bool m_itemCountHasBeenSet = false;

    long long m_itemNamesSizeBytes{0};
    bool m_itemNamesSizeBytesHasBeenSet = false;

    int m_attributeNameCount{0};
    bool m_attributeNameCountHasBeenSet = false;

    long long m_attributeNamesSizeBytes{0};
    bool m_attributeNamesSizeBytesHasBeenSet = false;

    int m_attributeValueCount{0};
    bool m_attributeValueCountHasBeenSet = false;

    long long m_attributeValuesSizeBytes{0};
    bool m_attributeValuesSizeBytesHasBeenSet = false;

    int m_timestamp{0};
    bool m_timestampHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
