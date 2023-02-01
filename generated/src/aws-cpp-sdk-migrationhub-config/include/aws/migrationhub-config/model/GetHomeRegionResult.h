/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
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
namespace MigrationHubConfig
{
namespace Model
{
  class GetHomeRegionResult
  {
  public:
    AWS_MIGRATIONHUBCONFIG_API GetHomeRegionResult();
    AWS_MIGRATIONHUBCONFIG_API GetHomeRegionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBCONFIG_API GetHomeRegionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegion = value; }

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegion = std::move(value); }

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline void SetHomeRegion(const char* value) { m_homeRegion.assign(value); }

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline GetHomeRegionResult& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline GetHomeRegionResult& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}

    /**
     * <p>The name of the home region of the calling account.</p>
     */
    inline GetHomeRegionResult& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}

  private:

    Aws::String m_homeRegion;
  };

} // namespace Model
} // namespace MigrationHubConfig
} // namespace Aws
