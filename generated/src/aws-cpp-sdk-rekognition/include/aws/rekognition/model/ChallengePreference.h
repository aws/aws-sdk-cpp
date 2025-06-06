/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/ChallengeType.h>
#include <aws/rekognition/model/Versions.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>An ordered list of preferred challenge type and versions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ChallengePreference">AWS
   * API Reference</a></p>
   */
  class ChallengePreference
  {
  public:
    AWS_REKOGNITION_API ChallengePreference() = default;
    AWS_REKOGNITION_API ChallengePreference(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ChallengePreference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The types of challenges that have been selected for the Face Liveness
     * session.</p>
     */
    inline ChallengeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ChallengeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ChallengePreference& WithType(ChallengeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the challenges that have been selected for the Face Liveness
     * session.</p>
     */
    inline const Versions& GetVersions() const { return m_versions; }
    inline bool VersionsHasBeenSet() const { return m_versionsHasBeenSet; }
    template<typename VersionsT = Versions>
    void SetVersions(VersionsT&& value) { m_versionsHasBeenSet = true; m_versions = std::forward<VersionsT>(value); }
    template<typename VersionsT = Versions>
    ChallengePreference& WithVersions(VersionsT&& value) { SetVersions(std::forward<VersionsT>(value)); return *this;}
    ///@}
  private:

    ChallengeType m_type{ChallengeType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Versions m_versions;
    bool m_versionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
