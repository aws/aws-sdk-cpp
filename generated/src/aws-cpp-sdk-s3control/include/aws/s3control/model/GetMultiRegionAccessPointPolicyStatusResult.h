﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/PolicyStatus.h>
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
namespace S3Control
{
namespace Model
{
  class GetMultiRegionAccessPointPolicyStatusResult
  {
  public:
    AWS_S3CONTROL_API GetMultiRegionAccessPointPolicyStatusResult();
    AWS_S3CONTROL_API GetMultiRegionAccessPointPolicyStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetMultiRegionAccessPointPolicyStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const PolicyStatus& GetEstablished() const{ return m_established; }

    
    inline void SetEstablished(const PolicyStatus& value) { m_established = value; }

    
    inline void SetEstablished(PolicyStatus&& value) { m_established = std::move(value); }

    
    inline GetMultiRegionAccessPointPolicyStatusResult& WithEstablished(const PolicyStatus& value) { SetEstablished(value); return *this;}

    
    inline GetMultiRegionAccessPointPolicyStatusResult& WithEstablished(PolicyStatus&& value) { SetEstablished(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMultiRegionAccessPointPolicyStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMultiRegionAccessPointPolicyStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMultiRegionAccessPointPolicyStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PolicyStatus m_established;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
