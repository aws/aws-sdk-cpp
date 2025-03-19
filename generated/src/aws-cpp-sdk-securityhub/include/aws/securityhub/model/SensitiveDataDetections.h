/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/Occurrences.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The list of detected instances of sensitive data.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/SensitiveDataDetections">AWS
   * API Reference</a></p>
   */
  class SensitiveDataDetections
  {
  public:
    AWS_SECURITYHUB_API SensitiveDataDetections() = default;
    AWS_SECURITYHUB_API SensitiveDataDetections(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API SensitiveDataDetections& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of occurrences of sensitive data that were detected.</p>
     */
    inline long long GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }
    inline SensitiveDataDetections& WithCount(long long value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of sensitive data that was detected. For example, the type might
     * indicate that the data is an email address.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    SensitiveDataDetections& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the sensitive data that was detected.</p>
     */
    inline const Occurrences& GetOccurrences() const { return m_occurrences; }
    inline bool OccurrencesHasBeenSet() const { return m_occurrencesHasBeenSet; }
    template<typename OccurrencesT = Occurrences>
    void SetOccurrences(OccurrencesT&& value) { m_occurrencesHasBeenSet = true; m_occurrences = std::forward<OccurrencesT>(value); }
    template<typename OccurrencesT = Occurrences>
    SensitiveDataDetections& WithOccurrences(OccurrencesT&& value) { SetOccurrences(std::forward<OccurrencesT>(value)); return *this;}
    ///@}
  private:

    long long m_count{0};
    bool m_countHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Occurrences m_occurrences;
    bool m_occurrencesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
