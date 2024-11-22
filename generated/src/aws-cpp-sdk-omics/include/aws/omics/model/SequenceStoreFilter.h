/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/SequenceStoreStatus.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>A filter for a sequence store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/SequenceStoreFilter">AWS
   * API Reference</a></p>
   */
  class SequenceStoreFilter
  {
  public:
    AWS_OMICS_API SequenceStoreFilter();
    AWS_OMICS_API SequenceStoreFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API SequenceStoreFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A name to filter on.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SequenceStoreFilter& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SequenceStoreFilter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SequenceStoreFilter& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter's start date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }
    inline SequenceStoreFilter& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}
    inline SequenceStoreFilter& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter's end date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }
    inline SequenceStoreFilter& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}
    inline SequenceStoreFilter& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter results based on status.</p>
     */
    inline const SequenceStoreStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SequenceStoreStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SequenceStoreStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SequenceStoreFilter& WithStatus(const SequenceStoreStatus& value) { SetStatus(value); return *this;}
    inline SequenceStoreFilter& WithStatus(SequenceStoreStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter results based on stores updated after the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAfter() const{ return m_updatedAfter; }
    inline bool UpdatedAfterHasBeenSet() const { return m_updatedAfterHasBeenSet; }
    inline void SetUpdatedAfter(const Aws::Utils::DateTime& value) { m_updatedAfterHasBeenSet = true; m_updatedAfter = value; }
    inline void SetUpdatedAfter(Aws::Utils::DateTime&& value) { m_updatedAfterHasBeenSet = true; m_updatedAfter = std::move(value); }
    inline SequenceStoreFilter& WithUpdatedAfter(const Aws::Utils::DateTime& value) { SetUpdatedAfter(value); return *this;}
    inline SequenceStoreFilter& WithUpdatedAfter(Aws::Utils::DateTime&& value) { SetUpdatedAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter results based on stores updated before the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedBefore() const{ return m_updatedBefore; }
    inline bool UpdatedBeforeHasBeenSet() const { return m_updatedBeforeHasBeenSet; }
    inline void SetUpdatedBefore(const Aws::Utils::DateTime& value) { m_updatedBeforeHasBeenSet = true; m_updatedBefore = value; }
    inline void SetUpdatedBefore(Aws::Utils::DateTime&& value) { m_updatedBeforeHasBeenSet = true; m_updatedBefore = std::move(value); }
    inline SequenceStoreFilter& WithUpdatedBefore(const Aws::Utils::DateTime& value) { SetUpdatedBefore(value); return *this;}
    inline SequenceStoreFilter& WithUpdatedBefore(Aws::Utils::DateTime&& value) { SetUpdatedBefore(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    SequenceStoreStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAfter;
    bool m_updatedAfterHasBeenSet = false;

    Aws::Utils::DateTime m_updatedBefore;
    bool m_updatedBeforeHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
