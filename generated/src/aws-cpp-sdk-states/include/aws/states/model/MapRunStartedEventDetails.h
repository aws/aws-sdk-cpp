/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about a Map Run that was started during a state machine
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/MapRunStartedEventDetails">AWS
   * API Reference</a></p>
   */
  class MapRunStartedEventDetails
  {
  public:
    AWS_SFN_API MapRunStartedEventDetails() = default;
    AWS_SFN_API MapRunStartedEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API MapRunStartedEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a Map Run that was started.</p>
     */
    inline const Aws::String& GetMapRunArn() const { return m_mapRunArn; }
    inline bool MapRunArnHasBeenSet() const { return m_mapRunArnHasBeenSet; }
    template<typename MapRunArnT = Aws::String>
    void SetMapRunArn(MapRunArnT&& value) { m_mapRunArnHasBeenSet = true; m_mapRunArn = std::forward<MapRunArnT>(value); }
    template<typename MapRunArnT = Aws::String>
    MapRunStartedEventDetails& WithMapRunArn(MapRunArnT&& value) { SetMapRunArn(std::forward<MapRunArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mapRunArn;
    bool m_mapRunArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
