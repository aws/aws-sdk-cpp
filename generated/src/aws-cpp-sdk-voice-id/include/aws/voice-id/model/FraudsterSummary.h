/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Contains a summary of information about a fraudster. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/FraudsterSummary">AWS
   * API Reference</a></p>
   */
  class FraudsterSummary
  {
  public:
    AWS_VOICEID_API FraudsterSummary() = default;
    AWS_VOICEID_API FraudsterSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API FraudsterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when the fraudster summary was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    FraudsterSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the domain that contains the fraudster summary.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    FraudsterSummary& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service-generated identifier for the fraudster.</p>
     */
    inline const Aws::String& GetGeneratedFraudsterId() const { return m_generatedFraudsterId; }
    inline bool GeneratedFraudsterIdHasBeenSet() const { return m_generatedFraudsterIdHasBeenSet; }
    template<typename GeneratedFraudsterIdT = Aws::String>
    void SetGeneratedFraudsterId(GeneratedFraudsterIdT&& value) { m_generatedFraudsterIdHasBeenSet = true; m_generatedFraudsterId = std::forward<GeneratedFraudsterIdT>(value); }
    template<typename GeneratedFraudsterIdT = Aws::String>
    FraudsterSummary& WithGeneratedFraudsterId(GeneratedFraudsterIdT&& value) { SetGeneratedFraudsterId(std::forward<GeneratedFraudsterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the watchlists the fraudster is a part of.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWatchlistIds() const { return m_watchlistIds; }
    inline bool WatchlistIdsHasBeenSet() const { return m_watchlistIdsHasBeenSet; }
    template<typename WatchlistIdsT = Aws::Vector<Aws::String>>
    void SetWatchlistIds(WatchlistIdsT&& value) { m_watchlistIdsHasBeenSet = true; m_watchlistIds = std::forward<WatchlistIdsT>(value); }
    template<typename WatchlistIdsT = Aws::Vector<Aws::String>>
    FraudsterSummary& WithWatchlistIds(WatchlistIdsT&& value) { SetWatchlistIds(std::forward<WatchlistIdsT>(value)); return *this;}
    template<typename WatchlistIdsT = Aws::String>
    FraudsterSummary& AddWatchlistIds(WatchlistIdsT&& value) { m_watchlistIdsHasBeenSet = true; m_watchlistIds.emplace_back(std::forward<WatchlistIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_generatedFraudsterId;
    bool m_generatedFraudsterIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_watchlistIds;
    bool m_watchlistIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
