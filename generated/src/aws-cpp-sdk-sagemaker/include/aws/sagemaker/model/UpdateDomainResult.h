/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
  class UpdateDomainResult
  {
  public:
    AWS_SAGEMAKER_API UpdateDomainResult();
    AWS_SAGEMAKER_API UpdateDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the domain.</p>
     */
    inline const Aws::String& GetDomainArn() const{ return m_domainArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain.</p>
     */
    inline void SetDomainArn(const Aws::String& value) { m_domainArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain.</p>
     */
    inline void SetDomainArn(Aws::String&& value) { m_domainArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain.</p>
     */
    inline void SetDomainArn(const char* value) { m_domainArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain.</p>
     */
    inline UpdateDomainResult& WithDomainArn(const Aws::String& value) { SetDomainArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the domain.</p>
     */
    inline UpdateDomainResult& WithDomainArn(Aws::String&& value) { SetDomainArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the domain.</p>
     */
    inline UpdateDomainResult& WithDomainArn(const char* value) { SetDomainArn(value); return *this;}

  private:

    Aws::String m_domainArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
