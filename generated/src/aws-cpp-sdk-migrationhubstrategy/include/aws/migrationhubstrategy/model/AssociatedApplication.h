/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p> Object containing details about applications as defined in Application
   * Discovery Service. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/AssociatedApplication">AWS
   * API Reference</a></p>
   */
  class AssociatedApplication
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AssociatedApplication();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AssociatedApplication(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AssociatedApplication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> ID of the application as defined in Application Discovery Service. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> ID of the application as defined in Application Discovery Service. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> ID of the application as defined in Application Discovery Service. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> ID of the application as defined in Application Discovery Service. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> ID of the application as defined in Application Discovery Service. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> ID of the application as defined in Application Discovery Service. </p>
     */
    inline AssociatedApplication& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> ID of the application as defined in Application Discovery Service. </p>
     */
    inline AssociatedApplication& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> ID of the application as defined in Application Discovery Service. </p>
     */
    inline AssociatedApplication& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> Name of the application as defined in Application Discovery Service. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> Name of the application as defined in Application Discovery Service. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> Name of the application as defined in Application Discovery Service. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> Name of the application as defined in Application Discovery Service. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> Name of the application as defined in Application Discovery Service. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> Name of the application as defined in Application Discovery Service. </p>
     */
    inline AssociatedApplication& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> Name of the application as defined in Application Discovery Service. </p>
     */
    inline AssociatedApplication& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> Name of the application as defined in Application Discovery Service. </p>
     */
    inline AssociatedApplication& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
