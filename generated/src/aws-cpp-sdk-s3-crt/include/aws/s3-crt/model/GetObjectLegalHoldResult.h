/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/ObjectLockLegalHold.h>
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
namespace S3Crt
{
namespace Model
{
  class GetObjectLegalHoldResult
  {
  public:
    AWS_S3CRT_API GetObjectLegalHoldResult() = default;
    AWS_S3CRT_API GetObjectLegalHoldResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CRT_API GetObjectLegalHoldResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The current legal hold status for the specified object.</p>
     */
    inline const ObjectLockLegalHold& GetLegalHold() const { return m_legalHold; }
    template<typename LegalHoldT = ObjectLockLegalHold>
    void SetLegalHold(LegalHoldT&& value) { m_legalHoldHasBeenSet = true; m_legalHold = std::forward<LegalHoldT>(value); }
    template<typename LegalHoldT = ObjectLockLegalHold>
    GetObjectLegalHoldResult& WithLegalHold(LegalHoldT&& value) { SetLegalHold(std::forward<LegalHoldT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetObjectLegalHoldResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ObjectLockLegalHold m_legalHold;
    bool m_legalHoldHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
