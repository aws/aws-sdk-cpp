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
  class CreateOpsItemResult
  {
  public:
    AWS_SSM_API CreateOpsItemResult();
    AWS_SSM_API CreateOpsItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API CreateOpsItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline const Aws::String& GetOpsItemId() const{ return m_opsItemId; }
    inline void SetOpsItemId(const Aws::String& value) { m_opsItemId = value; }
    inline void SetOpsItemId(Aws::String&& value) { m_opsItemId = std::move(value); }
    inline void SetOpsItemId(const char* value) { m_opsItemId.assign(value); }
    inline CreateOpsItemResult& WithOpsItemId(const Aws::String& value) { SetOpsItemId(value); return *this;}
    inline CreateOpsItemResult& WithOpsItemId(Aws::String&& value) { SetOpsItemId(std::move(value)); return *this;}
    inline CreateOpsItemResult& WithOpsItemId(const char* value) { SetOpsItemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpsItem Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetOpsItemArn() const{ return m_opsItemArn; }
    inline void SetOpsItemArn(const Aws::String& value) { m_opsItemArn = value; }
    inline void SetOpsItemArn(Aws::String&& value) { m_opsItemArn = std::move(value); }
    inline void SetOpsItemArn(const char* value) { m_opsItemArn.assign(value); }
    inline CreateOpsItemResult& WithOpsItemArn(const Aws::String& value) { SetOpsItemArn(value); return *this;}
    inline CreateOpsItemResult& WithOpsItemArn(Aws::String&& value) { SetOpsItemArn(std::move(value)); return *this;}
    inline CreateOpsItemResult& WithOpsItemArn(const char* value) { SetOpsItemArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateOpsItemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateOpsItemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateOpsItemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_opsItemId;

    Aws::String m_opsItemArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
