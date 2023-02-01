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
  class UpdateEnvironmentTemplateVersionResult
  {
  public:
    AWS_PROTON_API UpdateEnvironmentTemplateVersionResult();
    AWS_PROTON_API UpdateEnvironmentTemplateVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API UpdateEnvironmentTemplateVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The environment template version detail data that's returned by Proton.</p>
     */
    inline const EnvironmentTemplateVersion& GetEnvironmentTemplateVersion() const{ return m_environmentTemplateVersion; }

    /**
     * <p>The environment template version detail data that's returned by Proton.</p>
     */
    inline void SetEnvironmentTemplateVersion(const EnvironmentTemplateVersion& value) { m_environmentTemplateVersion = value; }

    /**
     * <p>The environment template version detail data that's returned by Proton.</p>
     */
    inline void SetEnvironmentTemplateVersion(EnvironmentTemplateVersion&& value) { m_environmentTemplateVersion = std::move(value); }

    /**
     * <p>The environment template version detail data that's returned by Proton.</p>
     */
    inline UpdateEnvironmentTemplateVersionResult& WithEnvironmentTemplateVersion(const EnvironmentTemplateVersion& value) { SetEnvironmentTemplateVersion(value); return *this;}

    /**
     * <p>The environment template version detail data that's returned by Proton.</p>
     */
    inline UpdateEnvironmentTemplateVersionResult& WithEnvironmentTemplateVersion(EnvironmentTemplateVersion&& value) { SetEnvironmentTemplateVersion(std::move(value)); return *this;}

  private:

    EnvironmentTemplateVersion m_environmentTemplateVersion;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
