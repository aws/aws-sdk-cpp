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
  class GetDataProtectionPolicyResult
  {
  public:
    AWS_SNS_API GetDataProtectionPolicyResult() = default;
    AWS_SNS_API GetDataProtectionPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API GetDataProtectionPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Retrieves the <code>DataProtectionPolicy</code> in JSON string format.</p>
     */
    inline const Aws::String& GetDataProtectionPolicy() const { return m_dataProtectionPolicy; }
    template<typename DataProtectionPolicyT = Aws::String>
    void SetDataProtectionPolicy(DataProtectionPolicyT&& value) { m_dataProtectionPolicyHasBeenSet = true; m_dataProtectionPolicy = std::forward<DataProtectionPolicyT>(value); }
    template<typename DataProtectionPolicyT = Aws::String>
    GetDataProtectionPolicyResult& WithDataProtectionPolicy(DataProtectionPolicyT&& value) { SetDataProtectionPolicy(std::forward<DataProtectionPolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetDataProtectionPolicyResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataProtectionPolicy;
    bool m_dataProtectionPolicyHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
