/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Policy.h>
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
namespace MediaConvert
{
namespace Model
{
  class GetPolicyResult
  {
  public:
    AWS_MEDIACONVERT_API GetPolicyResult();
    AWS_MEDIACONVERT_API GetPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONVERT_API GetPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A policy configures behavior that you allow or disallow for your account. For
     * information about MediaConvert policies, see the user guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline const Policy& GetPolicy() const{ return m_policy; }

    /**
     * A policy configures behavior that you allow or disallow for your account. For
     * information about MediaConvert policies, see the user guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline void SetPolicy(const Policy& value) { m_policy = value; }

    /**
     * A policy configures behavior that you allow or disallow for your account. For
     * information about MediaConvert policies, see the user guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline void SetPolicy(Policy&& value) { m_policy = std::move(value); }

    /**
     * A policy configures behavior that you allow or disallow for your account. For
     * information about MediaConvert policies, see the user guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline GetPolicyResult& WithPolicy(const Policy& value) { SetPolicy(value); return *this;}

    /**
     * A policy configures behavior that you allow or disallow for your account. For
     * information about MediaConvert policies, see the user guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline GetPolicyResult& WithPolicy(Policy&& value) { SetPolicy(std::move(value)); return *this;}

  private:

    Policy m_policy;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
