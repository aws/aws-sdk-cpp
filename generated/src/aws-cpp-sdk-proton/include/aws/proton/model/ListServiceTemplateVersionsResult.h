/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/ServiceTemplateVersionSummary.h>
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
  class ListServiceTemplateVersionsResult
  {
  public:
    AWS_PROTON_API ListServiceTemplateVersionsResult();
    AWS_PROTON_API ListServiceTemplateVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListServiceTemplateVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of a service template, after the current
     * requested list of service major or minor versions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of a service template, after the current
     * requested list of service major or minor versions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of a service template, after the current
     * requested list of service major or minor versions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of a service template, after the current
     * requested list of service major or minor versions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of a service template, after the current
     * requested list of service major or minor versions.</p>
     */
    inline ListServiceTemplateVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of a service template, after the current
     * requested list of service major or minor versions.</p>
     */
    inline ListServiceTemplateVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the location of the next major or minor version in the
     * array of major or minor versions of a service template, after the current
     * requested list of service major or minor versions.</p>
     */
    inline ListServiceTemplateVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of major or minor versions of a service template with detail
     * data.</p>
     */
    inline const Aws::Vector<ServiceTemplateVersionSummary>& GetTemplateVersions() const{ return m_templateVersions; }

    /**
     * <p>An array of major or minor versions of a service template with detail
     * data.</p>
     */
    inline void SetTemplateVersions(const Aws::Vector<ServiceTemplateVersionSummary>& value) { m_templateVersions = value; }

    /**
     * <p>An array of major or minor versions of a service template with detail
     * data.</p>
     */
    inline void SetTemplateVersions(Aws::Vector<ServiceTemplateVersionSummary>&& value) { m_templateVersions = std::move(value); }

    /**
     * <p>An array of major or minor versions of a service template with detail
     * data.</p>
     */
    inline ListServiceTemplateVersionsResult& WithTemplateVersions(const Aws::Vector<ServiceTemplateVersionSummary>& value) { SetTemplateVersions(value); return *this;}

    /**
     * <p>An array of major or minor versions of a service template with detail
     * data.</p>
     */
    inline ListServiceTemplateVersionsResult& WithTemplateVersions(Aws::Vector<ServiceTemplateVersionSummary>&& value) { SetTemplateVersions(std::move(value)); return *this;}

    /**
     * <p>An array of major or minor versions of a service template with detail
     * data.</p>
     */
    inline ListServiceTemplateVersionsResult& AddTemplateVersions(const ServiceTemplateVersionSummary& value) { m_templateVersions.push_back(value); return *this; }

    /**
     * <p>An array of major or minor versions of a service template with detail
     * data.</p>
     */
    inline ListServiceTemplateVersionsResult& AddTemplateVersions(ServiceTemplateVersionSummary&& value) { m_templateVersions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ServiceTemplateVersionSummary> m_templateVersions;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
