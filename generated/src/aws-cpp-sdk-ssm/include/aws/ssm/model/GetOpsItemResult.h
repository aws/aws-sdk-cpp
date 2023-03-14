/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/OpsItem.h>
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
  class GetOpsItemResult
  {
  public:
    AWS_SSM_API GetOpsItemResult();
    AWS_SSM_API GetOpsItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetOpsItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The OpsItem.</p>
     */
    inline const OpsItem& GetOpsItem() const{ return m_opsItem; }

    /**
     * <p>The OpsItem.</p>
     */
    inline void SetOpsItem(const OpsItem& value) { m_opsItem = value; }

    /**
     * <p>The OpsItem.</p>
     */
    inline void SetOpsItem(OpsItem&& value) { m_opsItem = std::move(value); }

    /**
     * <p>The OpsItem.</p>
     */
    inline GetOpsItemResult& WithOpsItem(const OpsItem& value) { SetOpsItem(value); return *this;}

    /**
     * <p>The OpsItem.</p>
     */
    inline GetOpsItemResult& WithOpsItem(OpsItem&& value) { SetOpsItem(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetOpsItemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetOpsItemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetOpsItemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    OpsItem m_opsItem;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
