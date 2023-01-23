/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/panorama/model/PackageObject.h>
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
namespace Panorama
{
namespace Model
{
  class ListApplicationInstanceDependenciesResult
  {
  public:
    AWS_PANORAMA_API ListApplicationInstanceDependenciesResult();
    AWS_PANORAMA_API ListApplicationInstanceDependenciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API ListApplicationInstanceDependenciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListApplicationInstanceDependenciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListApplicationInstanceDependenciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListApplicationInstanceDependenciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of package objects.</p>
     */
    inline const Aws::Vector<PackageObject>& GetPackageObjects() const{ return m_packageObjects; }

    /**
     * <p>A list of package objects.</p>
     */
    inline void SetPackageObjects(const Aws::Vector<PackageObject>& value) { m_packageObjects = value; }

    /**
     * <p>A list of package objects.</p>
     */
    inline void SetPackageObjects(Aws::Vector<PackageObject>&& value) { m_packageObjects = std::move(value); }

    /**
     * <p>A list of package objects.</p>
     */
    inline ListApplicationInstanceDependenciesResult& WithPackageObjects(const Aws::Vector<PackageObject>& value) { SetPackageObjects(value); return *this;}

    /**
     * <p>A list of package objects.</p>
     */
    inline ListApplicationInstanceDependenciesResult& WithPackageObjects(Aws::Vector<PackageObject>&& value) { SetPackageObjects(std::move(value)); return *this;}

    /**
     * <p>A list of package objects.</p>
     */
    inline ListApplicationInstanceDependenciesResult& AddPackageObjects(const PackageObject& value) { m_packageObjects.push_back(value); return *this; }

    /**
     * <p>A list of package objects.</p>
     */
    inline ListApplicationInstanceDependenciesResult& AddPackageObjects(PackageObject&& value) { m_packageObjects.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<PackageObject> m_packageObjects;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
