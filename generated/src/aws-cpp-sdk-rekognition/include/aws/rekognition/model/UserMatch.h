/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/MatchedUser.h>
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
   * <p>Provides UserID metadata along with the confidence in the match of this
   * UserID with the input face.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/UserMatch">AWS
   * API Reference</a></p>
   */
  class UserMatch
  {
  public:
    AWS_REKOGNITION_API UserMatch();
    AWS_REKOGNITION_API UserMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API UserMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Describes the UserID metadata.</p>
     */
    inline double GetSimilarity() const{ return m_similarity; }

    /**
     * <p> Describes the UserID metadata.</p>
     */
    inline bool SimilarityHasBeenSet() const { return m_similarityHasBeenSet; }

    /**
     * <p> Describes the UserID metadata.</p>
     */
    inline void SetSimilarity(double value) { m_similarityHasBeenSet = true; m_similarity = value; }

    /**
     * <p> Describes the UserID metadata.</p>
     */
    inline UserMatch& WithSimilarity(double value) { SetSimilarity(value); return *this;}


    /**
     * <p> Confidence in the match of this UserID with the input face. </p>
     */
    inline const MatchedUser& GetUser() const{ return m_user; }

    /**
     * <p> Confidence in the match of this UserID with the input face. </p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p> Confidence in the match of this UserID with the input face. </p>
     */
    inline void SetUser(const MatchedUser& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p> Confidence in the match of this UserID with the input face. </p>
     */
    inline void SetUser(MatchedUser&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p> Confidence in the match of this UserID with the input face. </p>
     */
    inline UserMatch& WithUser(const MatchedUser& value) { SetUser(value); return *this;}

    /**
     * <p> Confidence in the match of this UserID with the input face. </p>
     */
    inline UserMatch& WithUser(MatchedUser&& value) { SetUser(std::move(value)); return *this;}

  private:

    double m_similarity;
    bool m_similarityHasBeenSet = false;

    MatchedUser m_user;
    bool m_userHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
