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
    AWS_SNS_API CreatePlatformApplicationResult() = default;
    AWS_SNS_API CreatePlatformApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API CreatePlatformApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> <code>PlatformApplicationArn</code> is returned.</p>
     */
    inline const Aws::String& GetPlatformApplicationArn() const { return m_platformApplicationArn; }
    template<typename PlatformApplicationArnT = Aws::String>
    void SetPlatformApplicationArn(PlatformApplicationArnT&& value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn = std::forward<PlatformApplicationArnT>(value); }
    template<typename PlatformApplicationArnT = Aws::String>
    CreatePlatformApplicationResult& WithPlatformApplicationArn(PlatformApplicationArnT&& value) { SetPlatformApplicationArn(std::forward<PlatformApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreatePlatformApplicationResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_platformApplicationArn;
    bool m_platformApplicationArnHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
