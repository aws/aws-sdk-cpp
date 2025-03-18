/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/DkimStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{
  /**
   * <p>If the action is successful, the service sends back an HTTP 200 response.</p>
   * <p>The following data is returned in JSON format by the service.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityDkimSigningAttributesResponse">AWS
   * API Reference</a></p>
   */
  class PutEmailIdentityDkimSigningAttributesResult
  {
  public:
    AWS_SESV2_API PutEmailIdentityDkimSigningAttributesResult() = default;
    AWS_SESV2_API PutEmailIdentityDkimSigningAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API PutEmailIdentityDkimSigningAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The DKIM authentication status of the identity. Amazon SES determines the
     * authentication status by searching for specific records in the DNS configuration
     * for your domain. If you used <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a> to set up DKIM authentication, Amazon SES tries to find three unique
     * CNAME records in the DNS configuration for your domain.</p> <p>If you provided a
     * public key to perform DKIM authentication, Amazon SES tries to find a TXT record
     * that uses the selector that you specified. The value of the TXT record must be a
     * public key that's paired with the private key that you specified in the process
     * of creating the identity.</p> <p>The status can be one of the following:</p>
     * <ul> <li> <p> <code>PENDING</code> – The verification process was initiated, but
     * Amazon SES hasn't yet detected the DKIM records in the DNS configuration for the
     * domain.</p> </li> <li> <p> <code>SUCCESS</code> – The verification process
     * completed successfully.</p> </li> <li> <p> <code>FAILED</code> – The
     * verification process failed. This typically occurs when Amazon SES fails to find
     * the DKIM records in the DNS configuration of the domain.</p> </li> <li> <p>
     * <code>TEMPORARY_FAILURE</code> – A temporary issue is preventing Amazon SES from
     * determining the DKIM authentication status of the domain.</p> </li> <li> <p>
     * <code>NOT_STARTED</code> – The DKIM verification process hasn't been initiated
     * for the domain.</p> </li> </ul>
     */
    inline DkimStatus GetDkimStatus() const { return m_dkimStatus; }
    inline void SetDkimStatus(DkimStatus value) { m_dkimStatusHasBeenSet = true; m_dkimStatus = value; }
    inline PutEmailIdentityDkimSigningAttributesResult& WithDkimStatus(DkimStatus value) { SetDkimStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you used <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a> to configure DKIM authentication for the domain, then this object
     * contains a set of unique strings that you use to create a set of CNAME records
     * that you add to the DNS configuration for your domain. When Amazon SES detects
     * these records in the DNS configuration for your domain, the DKIM authentication
     * process is complete.</p> <p>If you configured DKIM authentication for the domain
     * by providing your own public-private key pair, then this object contains the
     * selector that's associated with your public key.</p> <p>Regardless of the DKIM
     * authentication method you use, Amazon SES searches for the appropriate records
     * in the DNS configuration of the domain for up to 72 hours.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDkimTokens() const { return m_dkimTokens; }
    template<typename DkimTokensT = Aws::Vector<Aws::String>>
    void SetDkimTokens(DkimTokensT&& value) { m_dkimTokensHasBeenSet = true; m_dkimTokens = std::forward<DkimTokensT>(value); }
    template<typename DkimTokensT = Aws::Vector<Aws::String>>
    PutEmailIdentityDkimSigningAttributesResult& WithDkimTokens(DkimTokensT&& value) { SetDkimTokens(std::forward<DkimTokensT>(value)); return *this;}
    template<typename DkimTokensT = Aws::String>
    PutEmailIdentityDkimSigningAttributesResult& AddDkimTokens(DkimTokensT&& value) { m_dkimTokensHasBeenSet = true; m_dkimTokens.emplace_back(std::forward<DkimTokensT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutEmailIdentityDkimSigningAttributesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DkimStatus m_dkimStatus{DkimStatus::NOT_SET};
    bool m_dkimStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_dkimTokens;
    bool m_dkimTokensHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
