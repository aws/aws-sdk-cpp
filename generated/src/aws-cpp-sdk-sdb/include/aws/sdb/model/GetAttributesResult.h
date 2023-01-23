/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sdb/model/ResponseMetadata.h>
#include <aws/sdb/model/Attribute.h>
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
  class GetAttributesResult
  {
  public:
    AWS_SIMPLEDB_API GetAttributesResult();
    AWS_SIMPLEDB_API GetAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SIMPLEDB_API GetAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * The list of attributes returned by the operation.
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

    /**
     * The list of attributes returned by the operation.
     */
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributes = value; }

    /**
     * The list of attributes returned by the operation.
     */
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributes = std::move(value); }

    /**
     * The list of attributes returned by the operation.
     */
    inline GetAttributesResult& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

    /**
     * The list of attributes returned by the operation.
     */
    inline GetAttributesResult& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * The list of attributes returned by the operation.
     */
    inline GetAttributesResult& AddAttributes(const Attribute& value) { m_attributes.push_back(value); return *this; }

    /**
     * The list of attributes returned by the operation.
     */
    inline GetAttributesResult& AddAttributes(Attribute&& value) { m_attributes.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Attribute> m_attributes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
