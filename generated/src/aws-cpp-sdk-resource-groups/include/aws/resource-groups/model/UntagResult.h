/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ResourceGroups
{
namespace Model
{
  class UntagResult
  {
  public:
    AWS_RESOURCEGROUPS_API UntagResult();
    AWS_RESOURCEGROUPS_API UntagResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API UntagResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the resource group from which tags have
     * been removed.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UntagResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UntagResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UntagResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The keys of the tags that were removed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeys() const{ return m_keys; }
    inline void SetKeys(const Aws::Vector<Aws::String>& value) { m_keys = value; }
    inline void SetKeys(Aws::Vector<Aws::String>&& value) { m_keys = std::move(value); }
    inline UntagResult& WithKeys(const Aws::Vector<Aws::String>& value) { SetKeys(value); return *this;}
    inline UntagResult& WithKeys(Aws::Vector<Aws::String>&& value) { SetKeys(std::move(value)); return *this;}
    inline UntagResult& AddKeys(const Aws::String& value) { m_keys.push_back(value); return *this; }
    inline UntagResult& AddKeys(Aws::String&& value) { m_keys.push_back(std::move(value)); return *this; }
    inline UntagResult& AddKeys(const char* value) { m_keys.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UntagResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UntagResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UntagResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Vector<Aws::String> m_keys;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
