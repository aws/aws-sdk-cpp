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
   * <p>Contains details about an iteration of a Map state.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/MapIterationEventDetails">AWS
   * API Reference</a></p>
   */
  class MapIterationEventDetails
  {
  public:
    AWS_SFN_API MapIterationEventDetails();
    AWS_SFN_API MapIterationEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API MapIterationEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the iteration’s parent Map state.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the iteration’s parent Map state.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the iteration’s parent Map state.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the iteration’s parent Map state.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the iteration’s parent Map state.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the iteration’s parent Map state.</p>
     */
    inline MapIterationEventDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the iteration’s parent Map state.</p>
     */
    inline MapIterationEventDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the iteration’s parent Map state.</p>
     */
    inline MapIterationEventDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The index of the array belonging to the Map state iteration.</p>
     */
    inline int GetIndex() const{ return m_index; }

    /**
     * <p>The index of the array belonging to the Map state iteration.</p>
     */
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }

    /**
     * <p>The index of the array belonging to the Map state iteration.</p>
     */
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }

    /**
     * <p>The index of the array belonging to the Map state iteration.</p>
     */
    inline MapIterationEventDetails& WithIndex(int value) { SetIndex(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_index;
    bool m_indexHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
