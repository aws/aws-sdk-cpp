/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SNS
{
namespace Model
{
  /**
   * <p>The response from the <code>GetSMSAttributes</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetSMSAttributesResponse">AWS
   * API Reference</a></p>
   */
  class GetSMSAttributesResult
  {
  public:
    AWS_SNS_API GetSMSAttributesResult();
    AWS_SNS_API GetSMSAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API GetSMSAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The SMS attribute names and their values.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The SMS attribute names and their values.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributes = value; }

    /**
     * <p>The SMS attribute names and their values.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributes = std::move(value); }

    /**
     * <p>The SMS attribute names and their values.</p>
     */
    inline GetSMSAttributesResult& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The SMS attribute names and their values.</p>
     */
    inline GetSMSAttributesResult& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The SMS attribute names and their values.</p>
     */
    inline GetSMSAttributesResult& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributes.emplace(key, value); return *this; }

    /**
     * <p>The SMS attribute names and their values.</p>
     */
    inline GetSMSAttributesResult& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The SMS attribute names and their values.</p>
     */
    inline GetSMSAttributesResult& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The SMS attribute names and their values.</p>
     */
    inline GetSMSAttributesResult& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The SMS attribute names and their values.</p>
     */
    inline GetSMSAttributesResult& AddAttributes(const char* key, Aws::String&& value) { m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The SMS attribute names and their values.</p>
     */
    inline GetSMSAttributesResult& AddAttributes(Aws::String&& key, const char* value) { m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The SMS attribute names and their values.</p>
     */
    inline GetSMSAttributesResult& AddAttributes(const char* key, const char* value) { m_attributes.emplace(key, value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetSMSAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetSMSAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
