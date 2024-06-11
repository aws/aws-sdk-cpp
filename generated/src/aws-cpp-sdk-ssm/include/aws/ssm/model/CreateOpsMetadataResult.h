/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{
  class CreateOpsMetadataResult
  {
  public:
    AWS_SSM_API CreateOpsMetadataResult();
    AWS_SSM_API CreateOpsMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API CreateOpsMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object or blob created by
     * the call.</p>
     */
    inline const Aws::String& GetOpsMetadataArn() const{ return m_opsMetadataArn; }
    inline void SetOpsMetadataArn(const Aws::String& value) { m_opsMetadataArn = value; }
    inline void SetOpsMetadataArn(Aws::String&& value) { m_opsMetadataArn = std::move(value); }
    inline void SetOpsMetadataArn(const char* value) { m_opsMetadataArn.assign(value); }
    inline CreateOpsMetadataResult& WithOpsMetadataArn(const Aws::String& value) { SetOpsMetadataArn(value); return *this;}
    inline CreateOpsMetadataResult& WithOpsMetadataArn(Aws::String&& value) { SetOpsMetadataArn(std::move(value)); return *this;}
    inline CreateOpsMetadataResult& WithOpsMetadataArn(const char* value) { SetOpsMetadataArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateOpsMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateOpsMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateOpsMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_opsMetadataArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
