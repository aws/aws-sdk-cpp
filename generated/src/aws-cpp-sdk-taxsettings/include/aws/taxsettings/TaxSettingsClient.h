/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/taxsettings/TaxSettingsServiceClientModel.h>

namespace Aws
{
namespace TaxSettings
{
  /**
   * <p>You can use the tax setting API to programmatically set, modify, and delete
   * the tax registration number (TRN), associated business legal name, and address
   * (Collectively referred to as "TRN information"). You can also programmatically
   * view TRN information and tax addresses ("Tax profiles"). </p> <p>You can use
   * this API to automate your TRN information settings instead of manually using the
   * console.</p> <p>Service Endpoint</p> <ul> <li>
   * <p>https://tax.us-east-1.amazonaws.com</p> </li> </ul>
   */
  class AWS_TAXSETTINGS_API TaxSettingsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<TaxSettingsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef TaxSettingsClientConfiguration ClientConfigurationType;
      typedef TaxSettingsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TaxSettingsClient(const Aws::TaxSettings::TaxSettingsClientConfiguration& clientConfiguration = Aws::TaxSettings::TaxSettingsClientConfiguration(),
                          std::shared_ptr<TaxSettingsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TaxSettingsClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<TaxSettingsEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::TaxSettings::TaxSettingsClientConfiguration& clientConfiguration = Aws::TaxSettings::TaxSettingsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TaxSettingsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<TaxSettingsEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::TaxSettings::TaxSettingsClientConfiguration& clientConfiguration = Aws::TaxSettings::TaxSettingsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TaxSettingsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TaxSettingsClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TaxSettingsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~TaxSettingsClient();

        /**
         * <p>Deletes tax registration for multiple accounts in batch. This can be used to
         * delete tax registrations for up to five accounts in one batch. </p> 
         * <p>This API operation can't be used to delete your tax registration in Brazil.
         * Use the <a
         * href="https://console.aws.amazon.com/billing/home#/paymentpreferences/paymentmethods">Payment
         * preferences</a> page in the Billing and Cost Management console instead.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/BatchDeleteTaxRegistration">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteTaxRegistrationOutcome BatchDeleteTaxRegistration(const Model::BatchDeleteTaxRegistrationRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteTaxRegistration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteTaxRegistrationRequestT = Model::BatchDeleteTaxRegistrationRequest>
        Model::BatchDeleteTaxRegistrationOutcomeCallable BatchDeleteTaxRegistrationCallable(const BatchDeleteTaxRegistrationRequestT& request) const
        {
            return SubmitCallable(&TaxSettingsClient::BatchDeleteTaxRegistration, request);
        }

        /**
         * An Async wrapper for BatchDeleteTaxRegistration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteTaxRegistrationRequestT = Model::BatchDeleteTaxRegistrationRequest>
        void BatchDeleteTaxRegistrationAsync(const BatchDeleteTaxRegistrationRequestT& request, const BatchDeleteTaxRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TaxSettingsClient::BatchDeleteTaxRegistration, request, handler, context);
        }

        /**
         * <p>Adds or updates tax registration for multiple accounts in batch. This can be
         * used to add or update tax registrations for up to five accounts in one batch.
         * You can't set a TRN if there's a pending TRN. You'll need to delete the pending
         * TRN first.</p> <p>To call this API operation for specific countries, see the
         * following country-specific requirements.</p> <p> <b>Bangladesh</b> </p> <ul>
         * <li> <p>You must specify the tax registration certificate document in the
         * <code>taxRegistrationDocuments</code> field of the
         * <code>VerificationDetails</code> object.</p> </li> </ul> <p> <b>Brazil</b> </p>
         * <ul> <li> <p>You must complete the tax registration process in the <a
         * href="https://console.aws.amazon.com/billing/home#/paymentpreferences/paymentmethods">Payment
         * preferences</a> page in the Billing and Cost Management console. After your TRN
         * and billing address are verified, you can call this API operation.</p> </li>
         * <li> <p>For Amazon Web Services accounts created through Organizations, you can
         * call this API operation when you don't have a billing address.</p> </li> </ul>
         * <p> <b>Georgia</b> </p> <ul> <li> <p>The valid <code>personType</code> values
         * are <code>Physical Person</code> and <code>Business</code>.</p> </li> </ul> <p>
         * <b>Kenya</b> </p> <ul> <li> <p>You must specify the <code>personType</code> in
         * the <code>kenyaAdditionalInfo</code> field of the
         * <code>additionalTaxInformation</code> object.</p> </li> <li> <p>If the
         * <code>personType</code> is <code>Physical Person</code>, you must specify the
         * tax registration certificate document in the
         * <code>taxRegistrationDocuments</code> field of the
         * <code>VerificationDetails</code> object.</p> </li> </ul> <p> <b>Malaysia</b>
         * </p> <ul> <li> <p>If you use this operation to set a tax registration number
         * (TRN) in Malaysia, only resellers with a valid sales and service tax (SST)
         * number are required to provide tax registration information.</p> </li> <li>
         * <p>By using this API operation to set a TRN in Malaysia, Amazon Web Services
         * will regard you as self-declaring that you're an authorized business reseller
         * registered with the Royal Malaysia Customs Department (RMCD) and have a valid
         * SST number.</p> </li> <li> <p>Amazon Web Services reserves the right to seek
         * additional information and/or take other actions to support your
         * self-declaration as appropriate.</p> </li> <li> <p>If you're not a reseller of
         * Amazon Web Services, we don't recommend that you use this operation to set the
         * TRN in Malaysia.</p> </li> <li> <p>Only use this API operation to upload the
         * TRNs for accounts through which you're reselling Amazon Web Services.</p> </li>
         * <li> <p>Amazon Web Services is currently registered under the following service
         * tax codes. You must include at least one of the service tax codes in the service
         * tax code strings to declare yourself as an authorized registered business
         * reseller.</p> <p>Taxable service and service tax codes:</p> <p>Consultancy -
         * 9907061674</p> <p>Training or coaching service - 9907071685</p> <p>IT service -
         * 9907101676</p> <p>Digital services and electronic medium - 9907121690</p> </li>
         * </ul> <p> <b>Nepal</b> </p> <ul> <li> <p>The sector valid values are
         * <code>Business</code> and <code>Individual</code>.</p> </li> </ul> <p> <b>Saudi
         * Arabia</b> </p> <ul> <li> <p>For <code>address</code>, you must specify
         * <code>addressLine3</code>.</p> </li> </ul> <p> <b>South Korea</b> </p> <ul> <li>
         * <p>You must specify the <code>certifiedEmailId</code> and <code>legalName</code>
         * in the <code>TaxRegistrationEntry</code> object. Use Korean characters for
         * <code>legalName</code>.</p> </li> <li> <p>You must specify the
         * <code>businessRepresentativeName</code>, <code>itemOfBusiness</code>, and
         * <code>lineOfBusiness</code> in the <code>southKoreaAdditionalInfo</code> field
         * of the <code>additionalTaxInformation</code> object. Use Korean characters for
         * these fields.</p> </li> <li> <p>You must specify the tax registration
         * certificate document in the <code>taxRegistrationDocuments</code> field of the
         * <code>VerificationDetails</code> object.</p> </li> <li> <p>For the
         * <code>address</code> object, use Korean characters for
         * <code>addressLine1</code>, <code>addressLine2</code> <code>city</code>,
         * <code>postalCode</code>, and <code>stateOrRegion</code>.</p> </li> </ul> <p>
         * <b>Spain</b> </p> <ul> <li> <p>You must specify the
         * <code>registrationType</code> in the <code>spainAdditionalInfo</code> field of
         * the <code>additionalTaxInformation</code> object.</p> </li> <li> <p>If the
         * <code>registrationType</code> is <code>Local</code>, you must specify the tax
         * registration certificate document in the <code>taxRegistrationDocuments</code>
         * field of the <code>VerificationDetails</code> object.</p> </li> </ul> <p>
         * <b>Turkey</b> </p> <ul> <li> <p>You must specify the <code>sector</code> in the
         * <code>taxRegistrationEntry</code> object.</p> </li> <li> <p>If your
         * <code>sector</code> is <code>Business</code>, <code>Individual</code>, or
         * <code>Government</code>:</p> <ul> <li> <p>Specify the <code>taxOffice</code>. If
         * your <code>sector</code> is <code>Individual</code>, don't enter this value.</p>
         * </li> <li> <p>(Optional) Specify the <code>kepEmailId</code>. If your
         * <code>sector</code> is <code>Individual</code>, don't enter this value.</p>
         * </li> <li> <p> <b>Note:</b> In the <b>Tax Settings</b> page of the Billing
         * console, <code>Government</code> appears as <b>Public institutions</b> </p>
         * </li> </ul> </li> <li> <p>If your <code>sector</code> is <code>Business</code>
         * and you're subject to KDV tax, you must specify your industry in the
         * <code>industries</code> field.</p> </li> <li> <p>For <code>address</code>, you
         * must specify <code>districtOrCounty</code>.</p> </li> </ul> <p> <b>Ukraine</b>
         * </p> <ul> <li> <p>The sector valid values are <code>Business</code> and
         * <code>Individual</code>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/BatchPutTaxRegistration">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutTaxRegistrationOutcome BatchPutTaxRegistration(const Model::BatchPutTaxRegistrationRequest& request) const;

        /**
         * A Callable wrapper for BatchPutTaxRegistration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchPutTaxRegistrationRequestT = Model::BatchPutTaxRegistrationRequest>
        Model::BatchPutTaxRegistrationOutcomeCallable BatchPutTaxRegistrationCallable(const BatchPutTaxRegistrationRequestT& request) const
        {
            return SubmitCallable(&TaxSettingsClient::BatchPutTaxRegistration, request);
        }

        /**
         * An Async wrapper for BatchPutTaxRegistration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchPutTaxRegistrationRequestT = Model::BatchPutTaxRegistrationRequest>
        void BatchPutTaxRegistrationAsync(const BatchPutTaxRegistrationRequestT& request, const BatchPutTaxRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TaxSettingsClient::BatchPutTaxRegistration, request, handler, context);
        }

        /**
         * <p>Deletes tax registration for a single account. </p>  <p>This API
         * operation can't be used to delete your tax registration in Brazil. Use the <a
         * href="https://console.aws.amazon.com/billing/home#/paymentpreferences/paymentmethods">Payment
         * preferences</a> page in the Billing and Cost Management console instead.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/DeleteTaxRegistration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTaxRegistrationOutcome DeleteTaxRegistration(const Model::DeleteTaxRegistrationRequest& request = {}) const;

        /**
         * A Callable wrapper for DeleteTaxRegistration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTaxRegistrationRequestT = Model::DeleteTaxRegistrationRequest>
        Model::DeleteTaxRegistrationOutcomeCallable DeleteTaxRegistrationCallable(const DeleteTaxRegistrationRequestT& request = {}) const
        {
            return SubmitCallable(&TaxSettingsClient::DeleteTaxRegistration, request);
        }

        /**
         * An Async wrapper for DeleteTaxRegistration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTaxRegistrationRequestT = Model::DeleteTaxRegistrationRequest>
        void DeleteTaxRegistrationAsync(const DeleteTaxRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DeleteTaxRegistrationRequestT& request = {}) const
        {
            return SubmitAsync(&TaxSettingsClient::DeleteTaxRegistration, request, handler, context);
        }

        /**
         * <p>Retrieves tax registration for a single account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/GetTaxRegistration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTaxRegistrationOutcome GetTaxRegistration(const Model::GetTaxRegistrationRequest& request = {}) const;

        /**
         * A Callable wrapper for GetTaxRegistration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTaxRegistrationRequestT = Model::GetTaxRegistrationRequest>
        Model::GetTaxRegistrationOutcomeCallable GetTaxRegistrationCallable(const GetTaxRegistrationRequestT& request = {}) const
        {
            return SubmitCallable(&TaxSettingsClient::GetTaxRegistration, request);
        }

        /**
         * An Async wrapper for GetTaxRegistration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTaxRegistrationRequestT = Model::GetTaxRegistrationRequest>
        void GetTaxRegistrationAsync(const GetTaxRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetTaxRegistrationRequestT& request = {}) const
        {
            return SubmitAsync(&TaxSettingsClient::GetTaxRegistration, request, handler, context);
        }

        /**
         * <p>Downloads your tax documents to the Amazon S3 bucket that you specify in your
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/GetTaxRegistrationDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTaxRegistrationDocumentOutcome GetTaxRegistrationDocument(const Model::GetTaxRegistrationDocumentRequest& request) const;

        /**
         * A Callable wrapper for GetTaxRegistrationDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTaxRegistrationDocumentRequestT = Model::GetTaxRegistrationDocumentRequest>
        Model::GetTaxRegistrationDocumentOutcomeCallable GetTaxRegistrationDocumentCallable(const GetTaxRegistrationDocumentRequestT& request) const
        {
            return SubmitCallable(&TaxSettingsClient::GetTaxRegistrationDocument, request);
        }

        /**
         * An Async wrapper for GetTaxRegistrationDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTaxRegistrationDocumentRequestT = Model::GetTaxRegistrationDocumentRequest>
        void GetTaxRegistrationDocumentAsync(const GetTaxRegistrationDocumentRequestT& request, const GetTaxRegistrationDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TaxSettingsClient::GetTaxRegistrationDocument, request, handler, context);
        }

        /**
         * <p>Retrieves the tax registration of accounts listed in a consolidated billing
         * family. This can be used to retrieve up to 100 accounts' tax registrations in
         * one call (default 50). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/ListTaxRegistrations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTaxRegistrationsOutcome ListTaxRegistrations(const Model::ListTaxRegistrationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListTaxRegistrations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTaxRegistrationsRequestT = Model::ListTaxRegistrationsRequest>
        Model::ListTaxRegistrationsOutcomeCallable ListTaxRegistrationsCallable(const ListTaxRegistrationsRequestT& request = {}) const
        {
            return SubmitCallable(&TaxSettingsClient::ListTaxRegistrations, request);
        }

        /**
         * An Async wrapper for ListTaxRegistrations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTaxRegistrationsRequestT = Model::ListTaxRegistrationsRequest>
        void ListTaxRegistrationsAsync(const ListTaxRegistrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListTaxRegistrationsRequestT& request = {}) const
        {
            return SubmitAsync(&TaxSettingsClient::ListTaxRegistrations, request, handler, context);
        }

        /**
         * <p>Adds or updates tax registration for a single account. You can't set a TRN if
         * there's a pending TRN. You'll need to delete the pending TRN first.</p> <p>To
         * call this API operation for specific countries, see the following
         * country-specific requirements.</p> <p> <b>Bangladesh</b> </p> <ul> <li> <p>You
         * must specify the tax registration certificate document in the
         * <code>taxRegistrationDocuments</code> field of the
         * <code>VerificationDetails</code> object.</p> </li> </ul> <p> <b>Brazil</b> </p>
         * <ul> <li> <p>You must complete the tax registration process in the <a
         * href="https://console.aws.amazon.com/billing/home#/paymentpreferences/paymentmethods">Payment
         * preferences</a> page in the Billing and Cost Management console. After your TRN
         * and billing address are verified, you can call this API operation.</p> </li>
         * <li> <p>For Amazon Web Services accounts created through Organizations, you can
         * call this API operation when you don't have a billing address.</p> </li> </ul>
         * <p> <b>Georgia</b> </p> <ul> <li> <p>The valid <code>personType</code> values
         * are <code>Physical Person</code> and <code>Business</code>.</p> </li> </ul> <p>
         * <b>Kenya</b> </p> <ul> <li> <p>You must specify the <code>personType</code> in
         * the <code>kenyaAdditionalInfo</code> field of the
         * <code>additionalTaxInformation</code> object.</p> </li> <li> <p>If the
         * <code>personType</code> is <code>Physical Person</code>, you must specify the
         * tax registration certificate document in the
         * <code>taxRegistrationDocuments</code> field of the
         * <code>VerificationDetails</code> object.</p> </li> </ul> <p> <b>Malaysia</b>
         * </p> <ul> <li> <p>If you use this operation to set a tax registration number
         * (TRN) in Malaysia, only resellers with a valid sales and service tax (SST)
         * number are required to provide tax registration information.</p> </li> <li>
         * <p>By using this API operation to set a TRN in Malaysia, Amazon Web Services
         * will regard you as self-declaring that you're an authorized business reseller
         * registered with the Royal Malaysia Customs Department (RMCD) and have a valid
         * SST number.</p> </li> <li> <p>Amazon Web Services reserves the right to seek
         * additional information and/or take other actions to support your
         * self-declaration as appropriate.</p> </li> <li> <p>If you're not a reseller of
         * Amazon Web Services, we don't recommend that you use this operation to set the
         * TRN in Malaysia.</p> </li> <li> <p>Only use this API operation to upload the
         * TRNs for accounts through which you're reselling Amazon Web Services.</p> </li>
         * <li> <p>Amazon Web Services is currently registered under the following service
         * tax codes. You must include at least one of the service tax codes in the service
         * tax code strings to declare yourself as an authorized registered business
         * reseller.</p> <p>Taxable service and service tax codes:</p> <p>Consultancy -
         * 9907061674</p> <p>Training or coaching service - 9907071685</p> <p>IT service -
         * 9907101676</p> <p>Digital services and electronic medium - 9907121690</p> </li>
         * </ul> <p> <b>Nepal</b> </p> <ul> <li> <p>The sector valid values are
         * <code>Business</code> and <code>Individual</code>.</p> </li> </ul> <p> <b>Saudi
         * Arabia</b> </p> <ul> <li> <p>For <code>address</code>, you must specify
         * <code>addressLine3</code>.</p> </li> </ul> <p> <b>South Korea</b> </p> <ul> <li>
         * <p>You must specify the <code>certifiedEmailId</code> and <code>legalName</code>
         * in the <code>TaxRegistrationEntry</code> object. Use Korean characters for
         * <code>legalName</code>.</p> </li> <li> <p>You must specify the
         * <code>businessRepresentativeName</code>, <code>itemOfBusiness</code>, and
         * <code>lineOfBusiness</code> in the <code>southKoreaAdditionalInfo</code> field
         * of the <code>additionalTaxInformation</code> object. Use Korean characters for
         * these fields.</p> </li> <li> <p>You must specify the tax registration
         * certificate document in the <code>taxRegistrationDocuments</code> field of the
         * <code>VerificationDetails</code> object.</p> </li> <li> <p>For the
         * <code>address</code> object, use Korean characters for
         * <code>addressLine1</code>, <code>addressLine2</code> <code>city</code>,
         * <code>postalCode</code>, and <code>stateOrRegion</code>.</p> </li> </ul> <p>
         * <b>Spain</b> </p> <ul> <li> <p>You must specify the
         * <code>registrationType</code> in the <code>spainAdditionalInfo</code> field of
         * the <code>additionalTaxInformation</code> object.</p> </li> <li> <p>If the
         * <code>registrationType</code> is <code>Local</code>, you must specify the tax
         * registration certificate document in the <code>taxRegistrationDocuments</code>
         * field of the <code>VerificationDetails</code> object.</p> </li> </ul> <p>
         * <b>Turkey</b> </p> <ul> <li> <p>You must specify the <code>sector</code> in the
         * <code>taxRegistrationEntry</code> object.</p> </li> <li> <p>If your
         * <code>sector</code> is <code>Business</code>, <code>Individual</code>, or
         * <code>Government</code>:</p> <ul> <li> <p>Specify the <code>taxOffice</code>. If
         * your <code>sector</code> is <code>Individual</code>, don't enter this value.</p>
         * </li> <li> <p>(Optional) Specify the <code>kepEmailId</code>. If your
         * <code>sector</code> is <code>Individual</code>, don't enter this value.</p>
         * </li> <li> <p> <b>Note:</b> In the <b>Tax Settings</b> page of the Billing
         * console, <code>Government</code> appears as <b>Public institutions</b> </p>
         * </li> </ul> </li> <li> <p>If your <code>sector</code> is <code>Business</code>
         * and you're subject to KDV tax, you must specify your industry in the
         * <code>industries</code> field.</p> </li> <li> <p>For <code>address</code>, you
         * must specify <code>districtOrCounty</code>.</p> </li> </ul> <p> <b>Ukraine</b>
         * </p> <ul> <li> <p>The sector valid values are <code>Business</code> and
         * <code>Individual</code>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/PutTaxRegistration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutTaxRegistrationOutcome PutTaxRegistration(const Model::PutTaxRegistrationRequest& request) const;

        /**
         * A Callable wrapper for PutTaxRegistration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutTaxRegistrationRequestT = Model::PutTaxRegistrationRequest>
        Model::PutTaxRegistrationOutcomeCallable PutTaxRegistrationCallable(const PutTaxRegistrationRequestT& request) const
        {
            return SubmitCallable(&TaxSettingsClient::PutTaxRegistration, request);
        }

        /**
         * An Async wrapper for PutTaxRegistration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutTaxRegistrationRequestT = Model::PutTaxRegistrationRequest>
        void PutTaxRegistrationAsync(const PutTaxRegistrationRequestT& request, const PutTaxRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TaxSettingsClient::PutTaxRegistration, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<TaxSettingsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<TaxSettingsClient>;
      void init(const TaxSettingsClientConfiguration& clientConfiguration);

      TaxSettingsClientConfiguration m_clientConfiguration;
      std::shared_ptr<TaxSettingsEndpointProviderBase> m_endpointProvider;
  };

} // namespace TaxSettings
} // namespace Aws
