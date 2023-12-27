/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The settings for the pinned columns of a table visual.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TablePinnedFieldOptions">AWS
   * API Reference</a></p>
   */
  class TablePinnedFieldOptions
  {
  public:
    AWS_QUICKSIGHT_API TablePinnedFieldOptions();
    AWS_QUICKSIGHT_API TablePinnedFieldOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TablePinnedFieldOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of columns to be pinned to the left of a table visual.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPinnedLeftFields() const{ return m_pinnedLeftFields; }

    /**
     * <p>A list of columns to be pinned to the left of a table visual.</p>
     */
    inline bool PinnedLeftFieldsHasBeenSet() const { return m_pinnedLeftFieldsHasBeenSet; }

    /**
     * <p>A list of columns to be pinned to the left of a table visual.</p>
     */
    inline void SetPinnedLeftFields(const Aws::Vector<Aws::String>& value) { m_pinnedLeftFieldsHasBeenSet = true; m_pinnedLeftFields = value; }

    /**
     * <p>A list of columns to be pinned to the left of a table visual.</p>
     */
    inline void SetPinnedLeftFields(Aws::Vector<Aws::String>&& value) { m_pinnedLeftFieldsHasBeenSet = true; m_pinnedLeftFields = std::move(value); }

    /**
     * <p>A list of columns to be pinned to the left of a table visual.</p>
     */
    inline TablePinnedFieldOptions& WithPinnedLeftFields(const Aws::Vector<Aws::String>& value) { SetPinnedLeftFields(value); return *this;}

    /**
     * <p>A list of columns to be pinned to the left of a table visual.</p>
     */
    inline TablePinnedFieldOptions& WithPinnedLeftFields(Aws::Vector<Aws::String>&& value) { SetPinnedLeftFields(std::move(value)); return *this;}

    /**
     * <p>A list of columns to be pinned to the left of a table visual.</p>
     */
    inline TablePinnedFieldOptions& AddPinnedLeftFields(const Aws::String& value) { m_pinnedLeftFieldsHasBeenSet = true; m_pinnedLeftFields.push_back(value); return *this; }

    /**
     * <p>A list of columns to be pinned to the left of a table visual.</p>
     */
    inline TablePinnedFieldOptions& AddPinnedLeftFields(Aws::String&& value) { m_pinnedLeftFieldsHasBeenSet = true; m_pinnedLeftFields.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of columns to be pinned to the left of a table visual.</p>
     */
    inline TablePinnedFieldOptions& AddPinnedLeftFields(const char* value) { m_pinnedLeftFieldsHasBeenSet = true; m_pinnedLeftFields.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_pinnedLeftFields;
    bool m_pinnedLeftFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
