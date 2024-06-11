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
   * <p>Contains a summary of information about a watchlist.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/WatchlistSummary">AWS
   * API Reference</a></p>
   */
  class WatchlistSummary
  {
  public:
    AWS_VOICEID_API WatchlistSummary();
    AWS_VOICEID_API WatchlistSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API WatchlistSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when the watchlist was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline WatchlistSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline WatchlistSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the specified watchlist is the default watchlist of a domain.</p>
     */
    inline bool GetDefaultWatchlist() const{ return m_defaultWatchlist; }
    inline bool DefaultWatchlistHasBeenSet() const { return m_defaultWatchlistHasBeenSet; }
    inline void SetDefaultWatchlist(bool value) { m_defaultWatchlistHasBeenSet = true; m_defaultWatchlist = value; }
    inline WatchlistSummary& WithDefaultWatchlist(bool value) { SetDefaultWatchlist(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the watchlist.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline WatchlistSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline WatchlistSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline WatchlistSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the domain that contains the watchlist.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline WatchlistSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline WatchlistSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline WatchlistSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the watchlist.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline WatchlistSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline WatchlistSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline WatchlistSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the watchlist was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline WatchlistSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline WatchlistSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the watchlist.</p>
     */
    inline const Aws::String& GetWatchlistId() const{ return m_watchlistId; }
    inline bool WatchlistIdHasBeenSet() const { return m_watchlistIdHasBeenSet; }
    inline void SetWatchlistId(const Aws::String& value) { m_watchlistIdHasBeenSet = true; m_watchlistId = value; }
    inline void SetWatchlistId(Aws::String&& value) { m_watchlistIdHasBeenSet = true; m_watchlistId = std::move(value); }
    inline void SetWatchlistId(const char* value) { m_watchlistIdHasBeenSet = true; m_watchlistId.assign(value); }
    inline WatchlistSummary& WithWatchlistId(const Aws::String& value) { SetWatchlistId(value); return *this;}
    inline WatchlistSummary& WithWatchlistId(Aws::String&& value) { SetWatchlistId(std::move(value)); return *this;}
    inline WatchlistSummary& WithWatchlistId(const char* value) { SetWatchlistId(value); return *this;}
    ///@}
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
