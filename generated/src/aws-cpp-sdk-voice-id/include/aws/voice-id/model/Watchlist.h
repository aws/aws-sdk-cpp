/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace VoiceID
{
namespace Model
{

  /**
   * <p>Contains all the information about a watchlist.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/Watchlist">AWS
   * API Reference</a></p>
   */
  class Watchlist
  {
  public:
    AWS_VOICEID_API Watchlist();
    AWS_VOICEID_API Watchlist(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Watchlist& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp of when the watchlist was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the watchlist was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp of when the watchlist was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp of when the watchlist was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the watchlist was created.</p>
     */
    inline Watchlist& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the watchlist was created.</p>
     */
    inline Watchlist& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Whether the specified watchlist is the default watchlist of a domain.</p>
     */
    inline bool GetDefaultWatchlist() const{ return m_defaultWatchlist; }

    /**
     * <p>Whether the specified watchlist is the default watchlist of a domain.</p>
     */
    inline bool DefaultWatchlistHasBeenSet() const { return m_defaultWatchlistHasBeenSet; }

    /**
     * <p>Whether the specified watchlist is the default watchlist of a domain.</p>
     */
    inline void SetDefaultWatchlist(bool value) { m_defaultWatchlistHasBeenSet = true; m_defaultWatchlist = value; }

    /**
     * <p>Whether the specified watchlist is the default watchlist of a domain.</p>
     */
    inline Watchlist& WithDefaultWatchlist(bool value) { SetDefaultWatchlist(value); return *this;}


    /**
     * <p>The description of the watchlist.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the watchlist.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the watchlist.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the watchlist.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the watchlist.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the watchlist.</p>
     */
    inline Watchlist& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the watchlist.</p>
     */
    inline Watchlist& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the watchlist.</p>
     */
    inline Watchlist& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the domain that contains the watchlist.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the domain that contains the watchlist.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The identifier of the domain that contains the watchlist.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The identifier of the domain that contains the watchlist.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The identifier of the domain that contains the watchlist.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The identifier of the domain that contains the watchlist.</p>
     */
    inline Watchlist& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the domain that contains the watchlist.</p>
     */
    inline Watchlist& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the domain that contains the watchlist.</p>
     */
    inline Watchlist& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The name for the watchlist.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the watchlist.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the watchlist.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the watchlist.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the watchlist.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the watchlist.</p>
     */
    inline Watchlist& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the watchlist.</p>
     */
    inline Watchlist& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the watchlist.</p>
     */
    inline Watchlist& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The timestamp of when the watchlist was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the watchlist was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp of when the watchlist was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp of when the watchlist was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the watchlist was updated.</p>
     */
    inline Watchlist& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the watchlist was updated.</p>
     */
    inline Watchlist& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The identifier of the watchlist.</p>
     */
    inline const Aws::String& GetWatchlistId() const{ return m_watchlistId; }

    /**
     * <p>The identifier of the watchlist.</p>
     */
    inline bool WatchlistIdHasBeenSet() const { return m_watchlistIdHasBeenSet; }

    /**
     * <p>The identifier of the watchlist.</p>
     */
    inline void SetWatchlistId(const Aws::String& value) { m_watchlistIdHasBeenSet = true; m_watchlistId = value; }

    /**
     * <p>The identifier of the watchlist.</p>
     */
    inline void SetWatchlistId(Aws::String&& value) { m_watchlistIdHasBeenSet = true; m_watchlistId = std::move(value); }

    /**
     * <p>The identifier of the watchlist.</p>
     */
    inline void SetWatchlistId(const char* value) { m_watchlistIdHasBeenSet = true; m_watchlistId.assign(value); }

    /**
     * <p>The identifier of the watchlist.</p>
     */
    inline Watchlist& WithWatchlistId(const Aws::String& value) { SetWatchlistId(value); return *this;}

    /**
     * <p>The identifier of the watchlist.</p>
     */
    inline Watchlist& WithWatchlistId(Aws::String&& value) { SetWatchlistId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the watchlist.</p>
     */
    inline Watchlist& WithWatchlistId(const char* value) { SetWatchlistId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    bool m_defaultWatchlist;
    bool m_defaultWatchlistHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_watchlistId;
    bool m_watchlistIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
