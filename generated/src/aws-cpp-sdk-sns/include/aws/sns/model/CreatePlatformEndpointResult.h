/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/model/ResponseMetadata.h>
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
   * <p>Response from CreateEndpoint action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreateEndpointResponse">AWS
   * API Reference</a></p>
   */
  class CreatePlatformEndpointResult
  {
  public:
    AWS_SNS_API CreatePlatformEndpointResult();
    AWS_SNS_API CreatePlatformEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API CreatePlatformEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>EndpointArn returned from CreateEndpoint action.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }

    /**
     * <p>EndpointArn returned from CreateEndpoint action.</p>
     */
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArn = value; }

    /**
     * <p>EndpointArn returned from CreateEndpoint action.</p>
     */
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArn = std::move(value); }

    /**
     * <p>EndpointArn returned from CreateEndpoint action.</p>
     */
    inline void SetEndpointArn(const char* value) { m_endpointArn.assign(value); }

    /**
     * <p>EndpointArn returned from CreateEndpoint action.</p>
     */
    inline CreatePlatformEndpointResult& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p>EndpointArn returned from CreateEndpoint action.</p>
     */
    inline CreatePlatformEndpointResult& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>EndpointArn returned from CreateEndpoint action.</p>
     */
    inline CreatePlatformEndpointResult& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreatePlatformEndpointResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreatePlatformEndpointResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_endpointArn;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
