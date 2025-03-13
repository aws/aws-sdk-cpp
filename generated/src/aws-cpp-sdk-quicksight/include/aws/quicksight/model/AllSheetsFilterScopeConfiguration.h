/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>An empty object that represents that the <code>AllSheets</code> option is the
   * chosen value for the <code>FilterScopeConfiguration</code> parameter. This
   * structure applies the filter to all visuals on all sheets of an Analysis,
   * Dashboard, or Template.</p> <p>This is a union type structure. For this
   * structure to be valid, only one of the attributes can be defined.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AllSheetsFilterScopeConfiguration">AWS
   * API Reference</a></p>
   */
  class AllSheetsFilterScopeConfiguration
  {
  public:
    AWS_QUICKSIGHT_API AllSheetsFilterScopeConfiguration() = default;
    AWS_QUICKSIGHT_API AllSheetsFilterScopeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AllSheetsFilterScopeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
