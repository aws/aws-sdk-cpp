﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/RequestCharged.h>
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
  class PutObjectLockConfigurationResult
  {
  public:
    AWS_S3CRT_API PutObjectLockConfigurationResult() = default;
    AWS_S3CRT_API PutObjectLockConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CRT_API PutObjectLockConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline RequestCharged GetRequestCharged() const { return m_requestCharged; }
    inline void SetRequestCharged(RequestCharged value) { m_requestChargedHasBeenSet = true; m_requestCharged = value; }
    inline PutObjectLockConfigurationResult& WithRequestCharged(RequestCharged value) { SetRequestCharged(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutObjectLockConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RequestCharged m_requestCharged{RequestCharged::NOT_SET};
    bool m_requestChargedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
