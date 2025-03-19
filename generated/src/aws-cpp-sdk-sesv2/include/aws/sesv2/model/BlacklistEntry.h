/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains information about a blacklisting event that impacts
   * one of the dedicated IP addresses that is associated with your
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/BlacklistEntry">AWS
   * API Reference</a></p>
   */
  class BlacklistEntry
  {
  public:
    AWS_SESV2_API BlacklistEntry() = default;
    AWS_SESV2_API BlacklistEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API BlacklistEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the blacklist that the IP address appears on.</p>
     */
    inline const Aws::String& GetRblName() const { return m_rblName; }
    inline bool RblNameHasBeenSet() const { return m_rblNameHasBeenSet; }
    template<typename RblNameT = Aws::String>
    void SetRblName(RblNameT&& value) { m_rblNameHasBeenSet = true; m_rblName = std::forward<RblNameT>(value); }
    template<typename RblNameT = Aws::String>
    BlacklistEntry& WithRblName(RblNameT&& value) { SetRblName(std::forward<RblNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the blacklisting event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetListingTime() const { return m_listingTime; }
    inline bool ListingTimeHasBeenSet() const { return m_listingTimeHasBeenSet; }
    template<typename ListingTimeT = Aws::Utils::DateTime>
    void SetListingTime(ListingTimeT&& value) { m_listingTimeHasBeenSet = true; m_listingTime = std::forward<ListingTimeT>(value); }
    template<typename ListingTimeT = Aws::Utils::DateTime>
    BlacklistEntry& WithListingTime(ListingTimeT&& value) { SetListingTime(std::forward<ListingTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the blacklisting event, as provided by the
     * blacklist maintainer.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    BlacklistEntry& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_rblName;
    bool m_rblNameHasBeenSet = false;

    Aws::Utils::DateTime m_listingTime{};
    bool m_listingTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
