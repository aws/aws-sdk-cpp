/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/Workforce.h>
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

    /**
     * <p>A single private workforce, which is automatically created when you create
     * your first private work team. You can create one private work force in each
     * Amazon Web Services Region. By default, any workforce-related API operation used
     * in a specific region will apply to the workforce created in that region. To
     * learn how to create a private workforce, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private.html">Create
     * a Private Workforce</a>.</p>
     */
    inline void SetWorkforce(const Workforce& value) { m_workforce = value; }

    /**
     * <p>A single private workforce, which is automatically created when you create
     * your first private work team. You can create one private work force in each
     * Amazon Web Services Region. By default, any workforce-related API operation used
     * in a specific region will apply to the workforce created in that region. To
     * learn how to create a private workforce, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private.html">Create
     * a Private Workforce</a>.</p>
     */
    inline void SetWorkforce(Workforce&& value) { m_workforce = std::move(value); }

    /**
     * <p>A single private workforce, which is automatically created when you create
     * your first private work team. You can create one private work force in each
     * Amazon Web Services Region. By default, any workforce-related API operation used
     * in a specific region will apply to the workforce created in that region. To
     * learn how to create a private workforce, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private.html">Create
     * a Private Workforce</a>.</p>
     */
    inline DescribeWorkforceResult& WithWorkforce(const Workforce& value) { SetWorkforce(value); return *this;}

    /**
     * <p>A single private workforce, which is automatically created when you create
     * your first private work team. You can create one private work force in each
     * Amazon Web Services Region. By default, any workforce-related API operation used
     * in a specific region will apply to the workforce created in that region. To
     * learn how to create a private workforce, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private.html">Create
     * a Private Workforce</a>.</p>
     */
    inline DescribeWorkforceResult& WithWorkforce(Workforce&& value) { SetWorkforce(std::move(value)); return *this;}

  private:

    Workforce m_workforce;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
