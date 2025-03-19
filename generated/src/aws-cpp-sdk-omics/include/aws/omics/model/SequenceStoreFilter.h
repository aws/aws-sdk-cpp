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
    AWS_OMICS_API SequenceStoreFilter() = default;
    AWS_OMICS_API SequenceStoreFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API SequenceStoreFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A name to filter on.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SequenceStoreFilter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter's start date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const { return m_createdAfter; }
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
    template<typename CreatedAfterT = Aws::Utils::DateTime>
    void SetCreatedAfter(CreatedAfterT&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::forward<CreatedAfterT>(value); }
    template<typename CreatedAfterT = Aws::Utils::DateTime>
    SequenceStoreFilter& WithCreatedAfter(CreatedAfterT&& value) { SetCreatedAfter(std::forward<CreatedAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter's end date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const { return m_createdBefore; }
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
    template<typename CreatedBeforeT = Aws::Utils::DateTime>
    void SetCreatedBefore(CreatedBeforeT&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::forward<CreatedBeforeT>(value); }
    template<typename CreatedBeforeT = Aws::Utils::DateTime>
    SequenceStoreFilter& WithCreatedBefore(CreatedBeforeT&& value) { SetCreatedBefore(std::forward<CreatedBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter results based on status.</p>
     */
    inline SequenceStoreStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SequenceStoreStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SequenceStoreFilter& WithStatus(SequenceStoreStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter results based on stores updated after the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAfter() const { return m_updatedAfter; }
    inline bool UpdatedAfterHasBeenSet() const { return m_updatedAfterHasBeenSet; }
    template<typename UpdatedAfterT = Aws::Utils::DateTime>
    void SetUpdatedAfter(UpdatedAfterT&& value) { m_updatedAfterHasBeenSet = true; m_updatedAfter = std::forward<UpdatedAfterT>(value); }
    template<typename UpdatedAfterT = Aws::Utils::DateTime>
    SequenceStoreFilter& WithUpdatedAfter(UpdatedAfterT&& value) { SetUpdatedAfter(std::forward<UpdatedAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter results based on stores updated before the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedBefore() const { return m_updatedBefore; }
    inline bool UpdatedBeforeHasBeenSet() const { return m_updatedBeforeHasBeenSet; }
    template<typename UpdatedBeforeT = Aws::Utils::DateTime>
    void SetUpdatedBefore(UpdatedBeforeT&& value) { m_updatedBeforeHasBeenSet = true; m_updatedBefore = std::forward<UpdatedBeforeT>(value); }
    template<typename UpdatedBeforeT = Aws::Utils::DateTime>
    SequenceStoreFilter& WithUpdatedBefore(UpdatedBeforeT&& value) { SetUpdatedBefore(std::forward<UpdatedBeforeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter{};
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore{};
    bool m_createdBeforeHasBeenSet = false;

    SequenceStoreStatus m_status{SequenceStoreStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAfter{};
    bool m_updatedAfterHasBeenSet = false;

    Aws::Utils::DateTime m_updatedBefore{};
    bool m_updatedBeforeHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
