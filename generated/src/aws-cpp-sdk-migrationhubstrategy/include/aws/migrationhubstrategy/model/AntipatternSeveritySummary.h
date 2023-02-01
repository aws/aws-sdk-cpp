/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/Severity.h>
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
   * <p> Contains the summary of anti-patterns and their severity. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/AntipatternSeveritySummary">AWS
   * API Reference</a></p>
   */
  class AntipatternSeveritySummary
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AntipatternSeveritySummary();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AntipatternSeveritySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AntipatternSeveritySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Contains the count of anti-patterns. </p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p> Contains the count of anti-patterns. </p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p> Contains the count of anti-patterns. </p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p> Contains the count of anti-patterns. </p>
     */
    inline AntipatternSeveritySummary& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p> Contains the severity of anti-patterns. </p>
     */
    inline const Severity& GetSeverity() const{ return m_severity; }

    /**
     * <p> Contains the severity of anti-patterns. </p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p> Contains the severity of anti-patterns. </p>
     */
    inline void SetSeverity(const Severity& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p> Contains the severity of anti-patterns. </p>
     */
    inline void SetSeverity(Severity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p> Contains the severity of anti-patterns. </p>
     */
    inline AntipatternSeveritySummary& WithSeverity(const Severity& value) { SetSeverity(value); return *this;}

    /**
     * <p> Contains the severity of anti-patterns. </p>
     */
    inline AntipatternSeveritySummary& WithSeverity(Severity&& value) { SetSeverity(std::move(value)); return *this;}

  private:

    int m_count;
    bool m_countHasBeenSet = false;

    Severity m_severity;
    bool m_severityHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
