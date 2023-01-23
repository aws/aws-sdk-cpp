/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/EnvironmentTemplate.h>
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
  class DeleteEnvironmentTemplateResult
  {
  public:
    AWS_PROTON_API DeleteEnvironmentTemplateResult();
    AWS_PROTON_API DeleteEnvironmentTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API DeleteEnvironmentTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detailed data of the environment template being deleted.</p>
     */
    inline const EnvironmentTemplate& GetEnvironmentTemplate() const{ return m_environmentTemplate; }

    /**
     * <p>The detailed data of the environment template being deleted.</p>
     */
    inline void SetEnvironmentTemplate(const EnvironmentTemplate& value) { m_environmentTemplate = value; }

    /**
     * <p>The detailed data of the environment template being deleted.</p>
     */
    inline void SetEnvironmentTemplate(EnvironmentTemplate&& value) { m_environmentTemplate = std::move(value); }

    /**
     * <p>The detailed data of the environment template being deleted.</p>
     */
    inline DeleteEnvironmentTemplateResult& WithEnvironmentTemplate(const EnvironmentTemplate& value) { SetEnvironmentTemplate(value); return *this;}

    /**
     * <p>The detailed data of the environment template being deleted.</p>
     */
    inline DeleteEnvironmentTemplateResult& WithEnvironmentTemplate(EnvironmentTemplate&& value) { SetEnvironmentTemplate(std::move(value)); return *this;}

  private:

    EnvironmentTemplate m_environmentTemplate;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
