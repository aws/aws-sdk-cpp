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
   * <p>Contains all the information about a fraudster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/Fraudster">AWS
   * API Reference</a></p>
   */
  class Fraudster
  {
  public:
    AWS_VOICEID_API Fraudster();
    AWS_VOICEID_API Fraudster(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Fraudster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp when Voice ID identified the fraudster.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when Voice ID identified the fraudster.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when Voice ID identified the fraudster.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when Voice ID identified the fraudster.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when Voice ID identified the fraudster.</p>
     */
    inline Fraudster& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when Voice ID identified the fraudster.</p>
     */
    inline Fraudster& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The identifier for the domain containing the fraudster.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier for the domain containing the fraudster.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The identifier for the domain containing the fraudster.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The identifier for the domain containing the fraudster.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The identifier for the domain containing the fraudster.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The identifier for the domain containing the fraudster.</p>
     */
    inline Fraudster& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier for the domain containing the fraudster.</p>
     */
    inline Fraudster& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the domain containing the fraudster.</p>
     */
    inline Fraudster& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The service-generated identifier for the fraudster.</p>
     */
    inline const Aws::String& GetGeneratedFraudsterId() const{ return m_generatedFraudsterId; }

    /**
     * <p>The service-generated identifier for the fraudster.</p>
     */
    inline bool GeneratedFraudsterIdHasBeenSet() const { return m_generatedFraudsterIdHasBeenSet; }

    /**
     * <p>The service-generated identifier for the fraudster.</p>
     */
    inline void SetGeneratedFraudsterId(const Aws::String& value) { m_generatedFraudsterIdHasBeenSet = true; m_generatedFraudsterId = value; }

    /**
     * <p>The service-generated identifier for the fraudster.</p>
     */
    inline void SetGeneratedFraudsterId(Aws::String&& value) { m_generatedFraudsterIdHasBeenSet = true; m_generatedFraudsterId = std::move(value); }

    /**
     * <p>The service-generated identifier for the fraudster.</p>
     */
    inline void SetGeneratedFraudsterId(const char* value) { m_generatedFraudsterIdHasBeenSet = true; m_generatedFraudsterId.assign(value); }

    /**
     * <p>The service-generated identifier for the fraudster.</p>
     */
    inline Fraudster& WithGeneratedFraudsterId(const Aws::String& value) { SetGeneratedFraudsterId(value); return *this;}

    /**
     * <p>The service-generated identifier for the fraudster.</p>
     */
    inline Fraudster& WithGeneratedFraudsterId(Aws::String&& value) { SetGeneratedFraudsterId(std::move(value)); return *this;}

    /**
     * <p>The service-generated identifier for the fraudster.</p>
     */
    inline Fraudster& WithGeneratedFraudsterId(const char* value) { SetGeneratedFraudsterId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_generatedFraudsterId;
    bool m_generatedFraudsterIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
