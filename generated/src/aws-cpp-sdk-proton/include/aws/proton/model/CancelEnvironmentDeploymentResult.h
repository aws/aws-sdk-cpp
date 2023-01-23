/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/Environment.h>
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
namespace Proton
{
namespace Model
{
  class CancelEnvironmentDeploymentResult
  {
  public:
    AWS_PROTON_API CancelEnvironmentDeploymentResult();
    AWS_PROTON_API CancelEnvironmentDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API CancelEnvironmentDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The environment summary data that's returned by Proton.</p>
     */
    inline const Environment& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment summary data that's returned by Proton.</p>
     */
    inline void SetEnvironment(const Environment& value) { m_environment = value; }

    /**
     * <p>The environment summary data that's returned by Proton.</p>
     */
    inline void SetEnvironment(Environment&& value) { m_environment = std::move(value); }

    /**
     * <p>The environment summary data that's returned by Proton.</p>
     */
    inline CancelEnvironmentDeploymentResult& WithEnvironment(const Environment& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment summary data that's returned by Proton.</p>
     */
    inline CancelEnvironmentDeploymentResult& WithEnvironment(Environment&& value) { SetEnvironment(std::move(value)); return *this;}

  private:

    Environment m_environment;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
