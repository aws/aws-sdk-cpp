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
    AWS_VOICEID_API FraudsterSummary();
    AWS_VOICEID_API FraudsterSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API FraudsterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when the fraudster summary was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline FraudsterSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline FraudsterSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the domain that contains the fraudster summary.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline FraudsterSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline FraudsterSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline FraudsterSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service-generated identifier for the fraudster.</p>
     */
    inline const Aws::String& GetGeneratedFraudsterId() const{ return m_generatedFraudsterId; }
    inline bool GeneratedFraudsterIdHasBeenSet() const { return m_generatedFraudsterIdHasBeenSet; }
    inline void SetGeneratedFraudsterId(const Aws::String& value) { m_generatedFraudsterIdHasBeenSet = true; m_generatedFraudsterId = value; }
    inline void SetGeneratedFraudsterId(Aws::String&& value) { m_generatedFraudsterIdHasBeenSet = true; m_generatedFraudsterId = std::move(value); }
    inline void SetGeneratedFraudsterId(const char* value) { m_generatedFraudsterIdHasBeenSet = true; m_generatedFraudsterId.assign(value); }
    inline FraudsterSummary& WithGeneratedFraudsterId(const Aws::String& value) { SetGeneratedFraudsterId(value); return *this;}
    inline FraudsterSummary& WithGeneratedFraudsterId(Aws::String&& value) { SetGeneratedFraudsterId(std::move(value)); return *this;}
    inline FraudsterSummary& WithGeneratedFraudsterId(const char* value) { SetGeneratedFraudsterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the watchlists the fraudster is a part of.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWatchlistIds() const{ return m_watchlistIds; }
    inline bool WatchlistIdsHasBeenSet() const { return m_watchlistIdsHasBeenSet; }
    inline void SetWatchlistIds(const Aws::Vector<Aws::String>& value) { m_watchlistIdsHasBeenSet = true; m_watchlistIds = value; }
    inline void SetWatchlistIds(Aws::Vector<Aws::String>&& value) { m_watchlistIdsHasBeenSet = true; m_watchlistIds = std::move(value); }
    inline FraudsterSummary& WithWatchlistIds(const Aws::Vector<Aws::String>& value) { SetWatchlistIds(value); return *this;}
    inline FraudsterSummary& WithWatchlistIds(Aws::Vector<Aws::String>&& value) { SetWatchlistIds(std::move(value)); return *this;}
    inline FraudsterSummary& AddWatchlistIds(const Aws::String& value) { m_watchlistIdsHasBeenSet = true; m_watchlistIds.push_back(value); return *this; }
    inline FraudsterSummary& AddWatchlistIds(Aws::String&& value) { m_watchlistIdsHasBeenSet = true; m_watchlistIds.push_back(std::move(value)); return *this; }
    inline FraudsterSummary& AddWatchlistIds(const char* value) { m_watchlistIdsHasBeenSet = true; m_watchlistIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
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
