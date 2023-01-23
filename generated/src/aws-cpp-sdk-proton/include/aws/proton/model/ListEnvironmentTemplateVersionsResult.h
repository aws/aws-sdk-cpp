/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/EnvironmentTemplateVersionSummary.h>
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
  class ListEnvironmentTemplateVersionsResult
  {
  public:
    AWS_PROTON_API ListEnvironmentTemplateVersionsResult();
    AWS_PROTON_API ListEnvironmentTemplateVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListEnvironmentTemplateVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of an environment template, after the list of
     * major or minor versions that was previously requested.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of an environment template, after the list of
     * major or minor versions that was previously requested.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of an environment template, after the list of
     * major or minor versions that was previously requested.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of an environment template, after the list of
     * major or minor versions that was previously requested.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of an environment template, after the list of
     * major or minor versions that was previously requested.</p>
     */
    inline ListEnvironmentTemplateVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of an environment template, after the list of
     * major or minor versions that was previously requested.</p>
     */
    inline ListEnvironmentTemplateVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of an environment template, after the list of
     * major or minor versions that was previously requested.</p>
     */
    inline ListEnvironmentTemplateVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of major or minor versions of an environment template detail
     * data.</p>
     */
    inline const Aws::Vector<EnvironmentTemplateVersionSummary>& GetTemplateVersions() const{ return m_templateVersions; }

    /**
     * <p>An array of major or minor versions of an environment template detail
     * data.</p>
     */
    inline void SetTemplateVersions(const Aws::Vector<EnvironmentTemplateVersionSummary>& value) { m_templateVersions = value; }

    /**
     * <p>An array of major or minor versions of an environment template detail
     * data.</p>
     */
    inline void SetTemplateVersions(Aws::Vector<EnvironmentTemplateVersionSummary>&& value) { m_templateVersions = std::move(value); }

    /**
     * <p>An array of major or minor versions of an environment template detail
     * data.</p>
     */
    inline ListEnvironmentTemplateVersionsResult& WithTemplateVersions(const Aws::Vector<EnvironmentTemplateVersionSummary>& value) { SetTemplateVersions(value); return *this;}

    /**
     * <p>An array of major or minor versions of an environment template detail
     * data.</p>
     */
    inline ListEnvironmentTemplateVersionsResult& WithTemplateVersions(Aws::Vector<EnvironmentTemplateVersionSummary>&& value) { SetTemplateVersions(std::move(value)); return *this;}

    /**
     * <p>An array of major or minor versions of an environment template detail
     * data.</p>
     */
    inline ListEnvironmentTemplateVersionsResult& AddTemplateVersions(const EnvironmentTemplateVersionSummary& value) { m_templateVersions.push_back(value); return *this; }

    /**
     * <p>An array of major or minor versions of an environment template detail
     * data.</p>
     */
    inline ListEnvironmentTemplateVersionsResult& AddTemplateVersions(EnvironmentTemplateVersionSummary&& value) { m_templateVersions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<EnvironmentTemplateVersionSummary> m_templateVersions;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
