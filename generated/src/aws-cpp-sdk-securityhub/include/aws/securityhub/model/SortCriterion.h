/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/SortOrder.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A collection of finding attributes used to sort findings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/SortCriterion">AWS
   * API Reference</a></p>
   */
  class SortCriterion
  {
  public:
    AWS_SECURITYHUB_API SortCriterion();
    AWS_SECURITYHUB_API SortCriterion(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API SortCriterion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The finding attribute used to sort findings.</p>
     */
    inline const Aws::String& GetField() const{ return m_field; }

    /**
     * <p>The finding attribute used to sort findings.</p>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>The finding attribute used to sort findings.</p>
     */
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>The finding attribute used to sort findings.</p>
     */
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>The finding attribute used to sort findings.</p>
     */
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }

    /**
     * <p>The finding attribute used to sort findings.</p>
     */
    inline SortCriterion& WithField(const Aws::String& value) { SetField(value); return *this;}

    /**
     * <p>The finding attribute used to sort findings.</p>
     */
    inline SortCriterion& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}

    /**
     * <p>The finding attribute used to sort findings.</p>
     */
    inline SortCriterion& WithField(const char* value) { SetField(value); return *this;}


    /**
     * <p>The order used to sort findings.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The order used to sort findings.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The order used to sort findings.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The order used to sort findings.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The order used to sort findings.</p>
     */
    inline SortCriterion& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The order used to sort findings.</p>
     */
    inline SortCriterion& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
