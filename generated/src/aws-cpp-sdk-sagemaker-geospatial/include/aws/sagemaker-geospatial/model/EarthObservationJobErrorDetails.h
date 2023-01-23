/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/EarthObservationJobErrorType.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>The structure representing the errors in an
   * EarthObservationJob.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/EarthObservationJobErrorDetails">AWS
   * API Reference</a></p>
   */
  class EarthObservationJobErrorDetails
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API EarthObservationJobErrorDetails();
    AWS_SAGEMAKERGEOSPATIAL_API EarthObservationJobErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API EarthObservationJobErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p/>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p/>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p/>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p/>
     */
    inline EarthObservationJobErrorDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p/>
     */
    inline EarthObservationJobErrorDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline EarthObservationJobErrorDetails& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p/>
     */
    inline const EarthObservationJobErrorType& GetType() const{ return m_type; }

    /**
     * <p/>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetType(const EarthObservationJobErrorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p/>
     */
    inline void SetType(EarthObservationJobErrorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p/>
     */
    inline EarthObservationJobErrorDetails& WithType(const EarthObservationJobErrorType& value) { SetType(value); return *this;}

    /**
     * <p/>
     */
    inline EarthObservationJobErrorDetails& WithType(EarthObservationJobErrorType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    EarthObservationJobErrorType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
