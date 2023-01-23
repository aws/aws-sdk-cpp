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
    AWS_SESV2_API BlacklistEntry();
    AWS_SESV2_API BlacklistEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API BlacklistEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the blacklist that the IP address appears on.</p>
     */
    inline const Aws::String& GetRblName() const{ return m_rblName; }

    /**
     * <p>The name of the blacklist that the IP address appears on.</p>
     */
    inline bool RblNameHasBeenSet() const { return m_rblNameHasBeenSet; }

    /**
     * <p>The name of the blacklist that the IP address appears on.</p>
     */
    inline void SetRblName(const Aws::String& value) { m_rblNameHasBeenSet = true; m_rblName = value; }

    /**
     * <p>The name of the blacklist that the IP address appears on.</p>
     */
    inline void SetRblName(Aws::String&& value) { m_rblNameHasBeenSet = true; m_rblName = std::move(value); }

    /**
     * <p>The name of the blacklist that the IP address appears on.</p>
     */
    inline void SetRblName(const char* value) { m_rblNameHasBeenSet = true; m_rblName.assign(value); }

    /**
     * <p>The name of the blacklist that the IP address appears on.</p>
     */
    inline BlacklistEntry& WithRblName(const Aws::String& value) { SetRblName(value); return *this;}

    /**
     * <p>The name of the blacklist that the IP address appears on.</p>
     */
    inline BlacklistEntry& WithRblName(Aws::String&& value) { SetRblName(std::move(value)); return *this;}

    /**
     * <p>The name of the blacklist that the IP address appears on.</p>
     */
    inline BlacklistEntry& WithRblName(const char* value) { SetRblName(value); return *this;}


    /**
     * <p>The time when the blacklisting event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetListingTime() const{ return m_listingTime; }

    /**
     * <p>The time when the blacklisting event occurred.</p>
     */
    inline bool ListingTimeHasBeenSet() const { return m_listingTimeHasBeenSet; }

    /**
     * <p>The time when the blacklisting event occurred.</p>
     */
    inline void SetListingTime(const Aws::Utils::DateTime& value) { m_listingTimeHasBeenSet = true; m_listingTime = value; }

    /**
     * <p>The time when the blacklisting event occurred.</p>
     */
    inline void SetListingTime(Aws::Utils::DateTime&& value) { m_listingTimeHasBeenSet = true; m_listingTime = std::move(value); }

    /**
     * <p>The time when the blacklisting event occurred.</p>
     */
    inline BlacklistEntry& WithListingTime(const Aws::Utils::DateTime& value) { SetListingTime(value); return *this;}

    /**
     * <p>The time when the blacklisting event occurred.</p>
     */
    inline BlacklistEntry& WithListingTime(Aws::Utils::DateTime&& value) { SetListingTime(std::move(value)); return *this;}


    /**
     * <p>Additional information about the blacklisting event, as provided by the
     * blacklist maintainer.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Additional information about the blacklisting event, as provided by the
     * blacklist maintainer.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Additional information about the blacklisting event, as provided by the
     * blacklist maintainer.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Additional information about the blacklisting event, as provided by the
     * blacklist maintainer.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Additional information about the blacklisting event, as provided by the
     * blacklist maintainer.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Additional information about the blacklisting event, as provided by the
     * blacklist maintainer.</p>
     */
    inline BlacklistEntry& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Additional information about the blacklisting event, as provided by the
     * blacklist maintainer.</p>
     */
    inline BlacklistEntry& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Additional information about the blacklisting event, as provided by the
     * blacklist maintainer.</p>
     */
    inline BlacklistEntry& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_rblName;
    bool m_rblNameHasBeenSet = false;

    Aws::Utils::DateTime m_listingTime;
    bool m_listingTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
