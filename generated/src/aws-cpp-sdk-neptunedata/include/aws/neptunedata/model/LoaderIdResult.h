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
    AWS_NEPTUNEDATA_API LoaderIdResult();
    AWS_NEPTUNEDATA_API LoaderIdResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API LoaderIdResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of load IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoadIds() const{ return m_loadIds; }

    /**
     * <p>A list of load IDs.</p>
     */
    inline bool LoadIdsHasBeenSet() const { return m_loadIdsHasBeenSet; }

    /**
     * <p>A list of load IDs.</p>
     */
    inline void SetLoadIds(const Aws::Vector<Aws::String>& value) { m_loadIdsHasBeenSet = true; m_loadIds = value; }

    /**
     * <p>A list of load IDs.</p>
     */
    inline void SetLoadIds(Aws::Vector<Aws::String>&& value) { m_loadIdsHasBeenSet = true; m_loadIds = std::move(value); }

    /**
     * <p>A list of load IDs.</p>
     */
    inline LoaderIdResult& WithLoadIds(const Aws::Vector<Aws::String>& value) { SetLoadIds(value); return *this;}

    /**
     * <p>A list of load IDs.</p>
     */
    inline LoaderIdResult& WithLoadIds(Aws::Vector<Aws::String>&& value) { SetLoadIds(std::move(value)); return *this;}

    /**
     * <p>A list of load IDs.</p>
     */
    inline LoaderIdResult& AddLoadIds(const Aws::String& value) { m_loadIdsHasBeenSet = true; m_loadIds.push_back(value); return *this; }

    /**
     * <p>A list of load IDs.</p>
     */
    inline LoaderIdResult& AddLoadIds(Aws::String&& value) { m_loadIdsHasBeenSet = true; m_loadIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of load IDs.</p>
     */
    inline LoaderIdResult& AddLoadIds(const char* value) { m_loadIdsHasBeenSet = true; m_loadIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_loadIds;
    bool m_loadIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
