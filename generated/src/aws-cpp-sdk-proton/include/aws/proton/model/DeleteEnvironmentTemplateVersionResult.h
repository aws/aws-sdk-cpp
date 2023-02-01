/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/EnvironmentTemplateVersion.h>
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
  class DeleteEnvironmentTemplateVersionResult
  {
  public:
    AWS_PROTON_API DeleteEnvironmentTemplateVersionResult();
    AWS_PROTON_API DeleteEnvironmentTemplateVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API DeleteEnvironmentTemplateVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detailed data of the environment template version being deleted.</p>
     */
    inline const EnvironmentTemplateVersion& GetEnvironmentTemplateVersion() const{ return m_environmentTemplateVersion; }

    /**
     * <p>The detailed data of the environment template version being deleted.</p>
     */
    inline void SetEnvironmentTemplateVersion(const EnvironmentTemplateVersion& value) { m_environmentTemplateVersion = value; }

    /**
     * <p>The detailed data of the environment template version being deleted.</p>
     */
    inline void SetEnvironmentTemplateVersion(EnvironmentTemplateVersion&& value) { m_environmentTemplateVersion = std::move(value); }

    /**
     * <p>The detailed data of the environment template version being deleted.</p>
     */
    inline DeleteEnvironmentTemplateVersionResult& WithEnvironmentTemplateVersion(const EnvironmentTemplateVersion& value) { SetEnvironmentTemplateVersion(value); return *this;}

    /**
     * <p>The detailed data of the environment template version being deleted.</p>
     */
    inline DeleteEnvironmentTemplateVersionResult& WithEnvironmentTemplateVersion(EnvironmentTemplateVersion&& value) { SetEnvironmentTemplateVersion(std::move(value)); return *this;}

  private:

    EnvironmentTemplateVersion m_environmentTemplateVersion;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
