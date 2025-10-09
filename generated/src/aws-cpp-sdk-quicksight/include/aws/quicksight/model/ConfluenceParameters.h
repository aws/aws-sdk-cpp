/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The parameters that are required to connect to a Confluence data
   * source</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ConfluenceParameters">AWS
   * API Reference</a></p>
   */
  class ConfluenceParameters
  {
  public:
    AWS_QUICKSIGHT_API ConfluenceParameters() = default;
    AWS_QUICKSIGHT_API ConfluenceParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ConfluenceParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL of the Confluence site to connect to.</p>
     */
    inline const Aws::String& GetConfluenceUrl() const { return m_confluenceUrl; }
    inline bool ConfluenceUrlHasBeenSet() const { return m_confluenceUrlHasBeenSet; }
    template<typename ConfluenceUrlT = Aws::String>
    void SetConfluenceUrl(ConfluenceUrlT&& value) { m_confluenceUrlHasBeenSet = true; m_confluenceUrl = std::forward<ConfluenceUrlT>(value); }
    template<typename ConfluenceUrlT = Aws::String>
    ConfluenceParameters& WithConfluenceUrl(ConfluenceUrlT&& value) { SetConfluenceUrl(std::forward<ConfluenceUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_confluenceUrl;
    bool m_confluenceUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
