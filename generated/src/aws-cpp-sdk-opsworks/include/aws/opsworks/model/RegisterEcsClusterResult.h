/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>RegisterEcsCluster</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterEcsClusterResult">AWS
   * API Reference</a></p>
   */
  class RegisterEcsClusterResult
  {
  public:
    AWS_OPSWORKS_API RegisterEcsClusterResult();
    AWS_OPSWORKS_API RegisterEcsClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API RegisterEcsClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The cluster's ARN.</p>
     */
    inline const Aws::String& GetEcsClusterArn() const{ return m_ecsClusterArn; }

    /**
     * <p>The cluster's ARN.</p>
     */
    inline void SetEcsClusterArn(const Aws::String& value) { m_ecsClusterArn = value; }

    /**
     * <p>The cluster's ARN.</p>
     */
    inline void SetEcsClusterArn(Aws::String&& value) { m_ecsClusterArn = std::move(value); }

    /**
     * <p>The cluster's ARN.</p>
     */
    inline void SetEcsClusterArn(const char* value) { m_ecsClusterArn.assign(value); }

    /**
     * <p>The cluster's ARN.</p>
     */
    inline RegisterEcsClusterResult& WithEcsClusterArn(const Aws::String& value) { SetEcsClusterArn(value); return *this;}

    /**
     * <p>The cluster's ARN.</p>
     */
    inline RegisterEcsClusterResult& WithEcsClusterArn(Aws::String&& value) { SetEcsClusterArn(std::move(value)); return *this;}

    /**
     * <p>The cluster's ARN.</p>
     */
    inline RegisterEcsClusterResult& WithEcsClusterArn(const char* value) { SetEcsClusterArn(value); return *this;}

  private:

    Aws::String m_ecsClusterArn;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
