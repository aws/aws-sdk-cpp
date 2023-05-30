/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securitylake/model/AwsLogSourceResource.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Automatically enable new organization accounts as member accounts from an
   * Amazon Security Lake administrator account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DataLakeAutoEnableNewAccountConfiguration">AWS
   * API Reference</a></p>
   */
  class DataLakeAutoEnableNewAccountConfiguration
  {
  public:
    AWS_SECURITYLAKE_API DataLakeAutoEnableNewAccountConfiguration();
    AWS_SECURITYLAKE_API DataLakeAutoEnableNewAccountConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeAutoEnableNewAccountConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services Regions where Security Lake is automatically
     * enabled.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Regions where Security Lake is automatically
     * enabled.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Regions where Security Lake is automatically
     * enabled.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Regions where Security Lake is automatically
     * enabled.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Regions where Security Lake is automatically
     * enabled.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Regions where Security Lake is automatically
     * enabled.</p>
     */
    inline DataLakeAutoEnableNewAccountConfiguration& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Regions where Security Lake is automatically
     * enabled.</p>
     */
    inline DataLakeAutoEnableNewAccountConfiguration& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Regions where Security Lake is automatically
     * enabled.</p>
     */
    inline DataLakeAutoEnableNewAccountConfiguration& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The Amazon Web Services sources that are automatically enabled in Security
     * Lake.</p>
     */
    inline const Aws::Vector<AwsLogSourceResource>& GetSources() const{ return m_sources; }

    /**
     * <p>The Amazon Web Services sources that are automatically enabled in Security
     * Lake.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>The Amazon Web Services sources that are automatically enabled in Security
     * Lake.</p>
     */
    inline void SetSources(const Aws::Vector<AwsLogSourceResource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>The Amazon Web Services sources that are automatically enabled in Security
     * Lake.</p>
     */
    inline void SetSources(Aws::Vector<AwsLogSourceResource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>The Amazon Web Services sources that are automatically enabled in Security
     * Lake.</p>
     */
    inline DataLakeAutoEnableNewAccountConfiguration& WithSources(const Aws::Vector<AwsLogSourceResource>& value) { SetSources(value); return *this;}

    /**
     * <p>The Amazon Web Services sources that are automatically enabled in Security
     * Lake.</p>
     */
    inline DataLakeAutoEnableNewAccountConfiguration& WithSources(Aws::Vector<AwsLogSourceResource>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services sources that are automatically enabled in Security
     * Lake.</p>
     */
    inline DataLakeAutoEnableNewAccountConfiguration& AddSources(const AwsLogSourceResource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>The Amazon Web Services sources that are automatically enabled in Security
     * Lake.</p>
     */
    inline DataLakeAutoEnableNewAccountConfiguration& AddSources(AwsLogSourceResource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Vector<AwsLogSourceResource> m_sources;
    bool m_sourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
