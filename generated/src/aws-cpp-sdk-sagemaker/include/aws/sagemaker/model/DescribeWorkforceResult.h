﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/Workforce.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeWorkforceResult
  {
  public:
    AWS_SAGEMAKER_API DescribeWorkforceResult();
    AWS_SAGEMAKER_API DescribeWorkforceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeWorkforceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A single private workforce, which is automatically created when you create
     * your first private work team. You can create one private work force in each
     * Amazon Web Services Region. By default, any workforce-related API operation used
     * in a specific region will apply to the workforce created in that region. To
     * learn how to create a private workforce, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private.html">Create
     * a Private Workforce</a>.</p>
     */
    inline const Workforce& GetWorkforce() const{ return m_workforce; }
    inline void SetWorkforce(const Workforce& value) { m_workforce = value; }
    inline void SetWorkforce(Workforce&& value) { m_workforce = std::move(value); }
    inline DescribeWorkforceResult& WithWorkforce(const Workforce& value) { SetWorkforce(value); return *this;}
    inline DescribeWorkforceResult& WithWorkforce(Workforce&& value) { SetWorkforce(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeWorkforceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeWorkforceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeWorkforceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Workforce m_workforce;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
