/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace neptunedata
{
namespace Model
{

  /**
   * <p>Contains a list of load IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/LoaderIdResult">AWS
   * API Reference</a></p>
   */
  class LoaderIdResult
  {
  public:
    AWS_NEPTUNEDATA_API LoaderIdResult() = default;
    AWS_NEPTUNEDATA_API LoaderIdResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API LoaderIdResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of load IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoadIds() const { return m_loadIds; }
    inline bool LoadIdsHasBeenSet() const { return m_loadIdsHasBeenSet; }
    template<typename LoadIdsT = Aws::Vector<Aws::String>>
    void SetLoadIds(LoadIdsT&& value) { m_loadIdsHasBeenSet = true; m_loadIds = std::forward<LoadIdsT>(value); }
    template<typename LoadIdsT = Aws::Vector<Aws::String>>
    LoaderIdResult& WithLoadIds(LoadIdsT&& value) { SetLoadIds(std::forward<LoadIdsT>(value)); return *this;}
    template<typename LoadIdsT = Aws::String>
    LoaderIdResult& AddLoadIds(LoadIdsT&& value) { m_loadIdsHasBeenSet = true; m_loadIds.emplace_back(std::forward<LoadIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_loadIds;
    bool m_loadIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
