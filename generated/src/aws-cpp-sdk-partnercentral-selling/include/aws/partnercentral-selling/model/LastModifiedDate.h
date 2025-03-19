/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>Defines a filter to retrieve opportunities based on the last modified date.
   * This filter is useful for tracking changes or updates to opportunities over
   * time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/LastModifiedDate">AWS
   * API Reference</a></p>
   */
  class LastModifiedDate
  {
  public:
    AWS_PARTNERCENTRALSELLING_API LastModifiedDate() = default;
    AWS_PARTNERCENTRALSELLING_API LastModifiedDate(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API LastModifiedDate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the date after which the opportunities were modified. Use this
     * filter to retrieve only those opportunities that were modified after a given
     * timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetAfterLastModifiedDate() const { return m_afterLastModifiedDate; }
    inline bool AfterLastModifiedDateHasBeenSet() const { return m_afterLastModifiedDateHasBeenSet; }
    template<typename AfterLastModifiedDateT = Aws::Utils::DateTime>
    void SetAfterLastModifiedDate(AfterLastModifiedDateT&& value) { m_afterLastModifiedDateHasBeenSet = true; m_afterLastModifiedDate = std::forward<AfterLastModifiedDateT>(value); }
    template<typename AfterLastModifiedDateT = Aws::Utils::DateTime>
    LastModifiedDate& WithAfterLastModifiedDate(AfterLastModifiedDateT&& value) { SetAfterLastModifiedDate(std::forward<AfterLastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the date before which the opportunities were modified. Use this
     * filter to retrieve only those opportunities that were modified before a given
     * timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetBeforeLastModifiedDate() const { return m_beforeLastModifiedDate; }
    inline bool BeforeLastModifiedDateHasBeenSet() const { return m_beforeLastModifiedDateHasBeenSet; }
    template<typename BeforeLastModifiedDateT = Aws::Utils::DateTime>
    void SetBeforeLastModifiedDate(BeforeLastModifiedDateT&& value) { m_beforeLastModifiedDateHasBeenSet = true; m_beforeLastModifiedDate = std::forward<BeforeLastModifiedDateT>(value); }
    template<typename BeforeLastModifiedDateT = Aws::Utils::DateTime>
    LastModifiedDate& WithBeforeLastModifiedDate(BeforeLastModifiedDateT&& value) { SetBeforeLastModifiedDate(std::forward<BeforeLastModifiedDateT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_afterLastModifiedDate{};
    bool m_afterLastModifiedDateHasBeenSet = false;

    Aws::Utils::DateTime m_beforeLastModifiedDate{};
    bool m_beforeLastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
