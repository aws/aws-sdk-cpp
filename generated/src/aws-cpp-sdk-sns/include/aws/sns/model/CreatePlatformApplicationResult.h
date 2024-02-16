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
   * <p>Response from CreatePlatformApplication action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreatePlatformApplicationResponse">AWS
   * API Reference</a></p>
   */
  class CreatePlatformApplicationResult
  {
  public:
    AWS_SNS_API CreatePlatformApplicationResult();
    AWS_SNS_API CreatePlatformApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API CreatePlatformApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p> <code>PlatformApplicationArn</code> is returned.</p>
     */
    inline const Aws::String& GetPlatformApplicationArn() const{ return m_platformApplicationArn; }

    /**
     * <p> <code>PlatformApplicationArn</code> is returned.</p>
     */
    inline void SetPlatformApplicationArn(const Aws::String& value) { m_platformApplicationArn = value; }

    /**
     * <p> <code>PlatformApplicationArn</code> is returned.</p>
     */
    inline void SetPlatformApplicationArn(Aws::String&& value) { m_platformApplicationArn = std::move(value); }

    /**
     * <p> <code>PlatformApplicationArn</code> is returned.</p>
     */
    inline void SetPlatformApplicationArn(const char* value) { m_platformApplicationArn.assign(value); }

    /**
     * <p> <code>PlatformApplicationArn</code> is returned.</p>
     */
    inline CreatePlatformApplicationResult& WithPlatformApplicationArn(const Aws::String& value) { SetPlatformApplicationArn(value); return *this;}

    /**
     * <p> <code>PlatformApplicationArn</code> is returned.</p>
     */
    inline CreatePlatformApplicationResult& WithPlatformApplicationArn(Aws::String&& value) { SetPlatformApplicationArn(std::move(value)); return *this;}

    /**
     * <p> <code>PlatformApplicationArn</code> is returned.</p>
     */
    inline CreatePlatformApplicationResult& WithPlatformApplicationArn(const char* value) { SetPlatformApplicationArn(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreatePlatformApplicationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreatePlatformApplicationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_platformApplicationArn;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
