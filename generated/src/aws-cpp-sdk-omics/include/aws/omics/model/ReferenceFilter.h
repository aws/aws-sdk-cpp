/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A filter for references.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ReferenceFilter">AWS
   * API Reference</a></p>
   */
  class ReferenceFilter
  {
  public:
    AWS_OMICS_API ReferenceFilter() = default;
    AWS_OMICS_API ReferenceFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ReferenceFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ReferenceFilter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An MD5 checksum to filter on.</p>
     */
    inline const Aws::String& GetMd5() const { return m_md5; }
    inline bool Md5HasBeenSet() const { return m_md5HasBeenSet; }
    template<typename Md5T = Aws::String>
    void SetMd5(Md5T&& value) { m_md5HasBeenSet = true; m_md5 = std::forward<Md5T>(value); }
    template<typename Md5T = Aws::String>
    ReferenceFilter& WithMd5(Md5T&& value) { SetMd5(std::forward<Md5T>(value)); return *this;}
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
    ReferenceFilter& WithCreatedAfter(CreatedAfterT&& value) { SetCreatedAfter(std::forward<CreatedAfterT>(value)); return *this;}
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
    ReferenceFilter& WithCreatedBefore(CreatedBeforeT&& value) { SetCreatedBefore(std::forward<CreatedBeforeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_md5;
    bool m_md5HasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter{};
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore{};
    bool m_createdBeforeHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
