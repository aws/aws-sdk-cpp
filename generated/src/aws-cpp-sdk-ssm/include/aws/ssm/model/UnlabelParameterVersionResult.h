/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{
  class UnlabelParameterVersionResult
  {
  public:
    AWS_SSM_API UnlabelParameterVersionResult();
    AWS_SSM_API UnlabelParameterVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API UnlabelParameterVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of all labels deleted from the parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemovedLabels() const{ return m_removedLabels; }
    inline void SetRemovedLabels(const Aws::Vector<Aws::String>& value) { m_removedLabels = value; }
    inline void SetRemovedLabels(Aws::Vector<Aws::String>&& value) { m_removedLabels = std::move(value); }
    inline UnlabelParameterVersionResult& WithRemovedLabels(const Aws::Vector<Aws::String>& value) { SetRemovedLabels(value); return *this;}
    inline UnlabelParameterVersionResult& WithRemovedLabels(Aws::Vector<Aws::String>&& value) { SetRemovedLabels(std::move(value)); return *this;}
    inline UnlabelParameterVersionResult& AddRemovedLabels(const Aws::String& value) { m_removedLabels.push_back(value); return *this; }
    inline UnlabelParameterVersionResult& AddRemovedLabels(Aws::String&& value) { m_removedLabels.push_back(std::move(value)); return *this; }
    inline UnlabelParameterVersionResult& AddRemovedLabels(const char* value) { m_removedLabels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The labels that aren't attached to the given parameter version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInvalidLabels() const{ return m_invalidLabels; }
    inline void SetInvalidLabels(const Aws::Vector<Aws::String>& value) { m_invalidLabels = value; }
    inline void SetInvalidLabels(Aws::Vector<Aws::String>&& value) { m_invalidLabels = std::move(value); }
    inline UnlabelParameterVersionResult& WithInvalidLabels(const Aws::Vector<Aws::String>& value) { SetInvalidLabels(value); return *this;}
    inline UnlabelParameterVersionResult& WithInvalidLabels(Aws::Vector<Aws::String>&& value) { SetInvalidLabels(std::move(value)); return *this;}
    inline UnlabelParameterVersionResult& AddInvalidLabels(const Aws::String& value) { m_invalidLabels.push_back(value); return *this; }
    inline UnlabelParameterVersionResult& AddInvalidLabels(Aws::String&& value) { m_invalidLabels.push_back(std::move(value)); return *this; }
    inline UnlabelParameterVersionResult& AddInvalidLabels(const char* value) { m_invalidLabels.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UnlabelParameterVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UnlabelParameterVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UnlabelParameterVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_removedLabels;

    Aws::Vector<Aws::String> m_invalidLabels;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
